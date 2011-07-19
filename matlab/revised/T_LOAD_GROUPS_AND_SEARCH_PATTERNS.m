% Copyright (C) 2011 by Valeriy Vishnevskiy
% (valera.vishnevskiy[at]yandex.ru)
%
% Permission is hereby granted, free of charge, to any person obtaining a 
% copy of this software and associated documentation files (the 
% "Software"), to deal in the Software without restriction, including 
% without limitation the rights to use, copy, modify, merge, publish, 
% distribute, sublicense, and/or sell copies of the Software, and to permit
% persons to whom the Software is furnished to do so, subject to the 
% following conditions:
% 
% The above copyright notice and this permission notice shall be included 
% in all copies or substantial portions of the Software.
% 
% THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
% OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
% MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
% NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
% DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR 
% OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
% USE OR OTHER DEALINGS IN THE SOFTWARE.

function Groups = T_LOAD_GROUPS_AND_SEARCH_PATTERNS( fpath, varargin )

% Create Group structure(M groups) and detect allpatterns. Can take some 
%time to run
%
% Groups = T_LOAD_GROUPS_AND_SEARCH_PATTERNS( fpath, 
%    files1, label1, ..., filesM, lalbelM,
%    ['alpha', value],  ['kkmax', value],  ['Nmin', value], 
%    ['lambda', value], ['lhmult', value], ['cor', value], 
%    ['min_pow_missed', value], ['allow_same_events', true|false], 
%    ['cuda_enabled', true|false] );
%
% Arguments
% fpath    [ string ] reletave path to folder, where ALL behavior formattd
%text files situated. Dont forget slash in the end!
% files*  [ 1 x Nfiles cell of strings], containing filenames in folder
% label*  [ string ], name of the group
% alpha    [ scalar ] significance level. [=0.001]
% Nmin     [ scalar ] minimal pattern occurrences. [=3]
% lambda   [ scalar ] - pattern fuzziness level. [=8]
% cor      [ scalar ] Minimal correlation for delteing pattern 
%duplicate. [=0.6]
% lhmult   [ scalar ] Sensivity to likelyhood. [=0.5]
% kkmax    [ scalar ] weight alignment. [=2]
% allow_same_events [ bool ] can pattern have teo or more same events?
%[=false]
% cuda_enabled      [ bool ] Is CUDA? [=true]
% OBSOLETE maxSigma Maximal tested variance. [ =round( Nt/250 ) ]
% OBSOLETE maxMu    Maximal tested shift. [ =round( Nt/3 ) ]
% OBSOLETE min_pow_missed  should be removed in future [=-8]
%
% Revisions:
% Author: 19 Jul 2011 Valeriy Vishnevskiy
% Superviser: Dmitry Vetrov

optargs = size( varargin, 2 );
Ngroups = 0;
i = 1;
Gfiles = struct( 'files', {}, 'label', [] );
%defaults
alpha = 0.01;
kkmax = 2.4;
Nmin = 3;
lambda = 8;
lhmult = 0.6;
cor = 0.6;
min_pow_missed = -9;
allow_same_events = false;
cuda_enabled = true;
argGroups = true; % are we reading groups right now?
while i <= optargs
    if argGroups && isa( varargin{i}, 'cell' )
        Ngroups = Ngroups + 1;
        Gfiles( Ngroups ).files = varargin{ i };
        if ~isa( varargin{ i + 1 }, 'char' )
            error([ 'I expect group label after files cell. See',... 
                'function call examples']);
        end
        Gfiles( Ngroups ).label = varargin{ i + 1 };
        i = i + 2;
    else
        argGroups = false;
        switch varargin{i}
            case 'alpha'
                alpha = varargin{i+1};
                i = i+2;
            case 'kkmax'
                kkmax = varargin{i+1};
                i = i+2;
            case 'Nmin'
                Nmin = varargin{i+1};
                i = i+2;
            case 'lambda'
                lambda = varargin{i+1};
                i = i+2;
            case 'lhmult'
                lhmult = varargin{i+1};
                i = i+2;
            case 'cor'
                cor = varargin{i+1};
                i = i+2;
            case 'maxSigma'
                maxSigma = varargin{i+1};
                i = i+2;
            case 'maxMu'
                maxMu = varargin{i+1};
                i = i+2;
            case 'min_pow_missed'
                min_pow_missed = varargin{i+1};
                i = i+2;
            case 'allow_same_events'
                allow_same_events = varargin{i+1};
                i = i+2;
            case 'cuda_enabled'
                cuda_enabled = varargin{i+1};
                i = i+2;
            otherwise
                error('Unknown parameter. See examples');
        end
    end
end

Groups = struct('Nfiles', [], 'Patterns', {}, 'conf', [], 'Label', []);
for ng = 1 : numel( Gfiles )
    Groups( ng ).Nfiles = numel( Gfiles( ng ).files );
    Groups( ng ).Label = Gfiles( ng ).label;
    for nf = 1 : numel( Gfiles( ng ).files )
        [events, Nt] = T_LOAD_FILE([fpath, Gfiles( ng ).files{ nf } ]);
        mesh_step=1;
        clear conf
        conf.alpha = alpha;
        conf.kkmax = kkmax;
        conf.Nmin  = Nmin;
        conf.lambda = lambda;
        conf.lhmult = lhmult;
        conf.cor = cor;
        conf.maxSigma = round( Nt / 100 ); 
        conf.maxMu = round( Nt / 8 ); 
        conf.min_pow_missed = min_pow_missed;
        conf.allow_same_events = allow_same_events;
        conf.Nt =  Nt;
        conf.events = events;
        pattern_window = round(Nt/2);
        ps = T_PS_FROM_TS(events, Nt, 1, conf);
        Groups( ng ).conf{ nf } = conf;

        fprintf('!!!!\n###%d %d### %s\n!!!!\n', ng, nf, [fpath, Gfiles( ng ).files{ nf } ]);
        Groups( ng ).Patterns{ nf } = T_FIND_PATTERNS(events, ps, Nt, ...
            pattern_window, cuda_enabled, conf);
    end
end
