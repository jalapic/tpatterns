% Copyright (C) 2011 by Valeriy Vishnevskiy
% (valera.vishnevskiy[at]yandex.ru)
%
% Permission is hereby granted, free of charge, to any person obtaining a copy
% of this software and associated documentation files (the "Software"), to deal
% in the Software without restriction, including without limitation the rights
% to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
% copies of the Software, and to permit persons to whom the Software is
% furnished to do so, subject to the following conditions:
% 
% The above copyright notice and this permission notice shall be included in
% all copies or substantial portions of the Software.
% 
% THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
% IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
% FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
% AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
% LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
% OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
% THE SOFTWARE.

function [ events, Nt ] = T_LOAD_FILE( fname )
% Read formatted behavior text file into events structure.
%
% [ events, Nt ] = T_LOAD_FILE( fname )
%
% Arguments
% fname    [ strinf ] Path to text file.
%
% Nt        [ int ]    Length of time period, while we are watching animal.
% events    [ struct ] Events structure. See README, EVENTS STRUCTURE.
%
% See also README, BEHAVIOR TEXT FILE FORMAT (!!!)
% Revisions:
% Author: 18 Jul 2011 Valeriy Vishnevskiy
% Superviser: Dmitry Vetrov


tfid = fopen(fname);
events = struct( 'event_name', [], 'indexes', [] );
[ C, position ] = textscan(tfid, '%s %s', 2);
[ C, position ] = textscan(tfid, '%d %s');
fclose(tfid);
T = C{1};
E = C{2};
it = 0;
for i = 1 : size(T,1)-1
    flag = 0;
    for j = 1 : size( events, 2)
        if ( strcmp( E(i), events(j).event_name ) == 1)
            events(j).indexes = [ events(j).indexes, double( T(i) + 1  ) ];
            flag = 1;
            break;
        end
    end
    
    if flag == 0
        it = it + 1; 
        events( it ).event_name = E(i);
        events( it ).event_name = events( it ).event_name{1};
        events( it ).indexes    = double( T(i) + 1 );
    end
end
Nt = double( T(end) );