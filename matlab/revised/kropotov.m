fpath='../../real_data/from_kropotov/formated/';
G1_files={'U10_exp.txt', 'U11_exp.txt','U12_exp.txt', 'U13_exp.txt',...
    'U14_exp.txt', 'U15_exp.txt'};

G2_files={'U16_exp.txt', 'U17_exp.txt','U18_exp.txt', 'U19_exp.txt',...
    'U21_exp.txt'};

% Ngroups = 2;
% Groups = struct('Nfiles', [], 'Patterns', {}, 'conf', [], 'Label', []);
% Group(1).Nfiles = 6;
% Group(2).Nfiles = 5;
% Group(1).Label = 'G1';
% Group(2).Label = 'G2';

Groups = T_LOAD_GROUPS_AND_SEARCH_PATTERNS( fpath, G1_files, 'Group 1', ...
    G2_files, 'Group 2' );