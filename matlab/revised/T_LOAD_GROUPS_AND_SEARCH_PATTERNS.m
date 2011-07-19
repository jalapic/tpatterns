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

% Create new pattern by merging given left and right subpatterns,
% connection parameters(shift and variance). Compute Likelihoods and 
% maximums for new pattern 
%
% [new_pats, patterns_merged] = T_ADD_PATTERN(events, ps, pL, pR, ...
% mesh_step, pattern_window, Nt, use_cuda, conf )
%
% Arguments
% events    [ array struct ] Events structure. See README, EVENTS STRUCTURE
% ps  OBSOLETE
% pL        [ 1 x struct ] Left pattern structure(subpattern). See README,
%PATTERN STRUCTURE
% pR         [ 1 x struct ] Right ==||== see previous
% Nt        [ int ]    Length of time period, while we are watching animal.
% use_cuda  [ bool ] Try to use cuda. Will return warning if something is 
%wrong
% conf      [ struct ] configuration structure with algorithm's parameters,
%etc. See README, CONFIG STRUCTURE.
%
% new_pats [ array struct ] Pattern to add(that we found). See README,
%PATTERN STRUCTURE
% patterns_merged [ int ]   Amount of found pattern.
%
% Revisions:
% Author: 18 Jul 2011 Valeriy Vishnevskiy
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
cuda_enabled = false;
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
        conf.maxMu = round( Nt / 10 ); 
        conf.min_pow_missed = min_pow_missed;
        conf.allow_same_events = allow_same_events;
        conf.Nt =  Nt;
        conf.events = events;
        conf
        pattern_window = round(Nt/2);
        ps = T_PS_FROM_TS(events, Nt, 1, conf);
        ps.Lh_maxs
        Groups( ng ).conf{ nf } = conf;
        [fpath, Gfiles( ng ).files{ nf } ]
        fprintf('!!!!\n###%d %d###\n!!!!', ng, nf);
        Groups( ng ).Patterns{ nf } = T_FIND_PATTERNS(events, ps, Nt, ...
            pattern_window, cuda_enabled, conf);
    end
end
