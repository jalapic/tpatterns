# -*- coding: utf-8 -*-
import math
import random

pat = [ [8,12], [10, 15], [9,14], [10,22] ]
sym = ['a', 'b', 'c', 'd', 'e' ]
Npat = 14;
ts = []
tss = ['g', 'j', 'r', 'x', 'y', 'z', 'w']
#N = 5000;
length = 0
random.seed()
for it in pat:
	length = length + it[1];

while Npat > 0: 
	ts.append( sym[0] ) 
	for i in xrange( len(pat) ):
		for j in range( pat[i][0] + random.randint(0,pat[i][1] - pat[i][0]) ):
			ts.append( '-' )
		ts.append( sym[i+1] )
	for i in range( random.randint(100,300) ):
		ts.append( '-' )
	Npat-=1

for i in xrange(len(ts)):
	if ts[i] == '-':
                if   random.randint(0,1000) > 985 :
			ts[i] = sym[ random.randint( 0, len(sym)-1 ) ]
                elif random.randint(0,1000) > 905 :
			ts[i] = tss[ random.randint( 0, len(tss)-1 ) ]
	else:
                if   random.randint(0,1000) > 9982 :
			ts[i] = sym[ random.randint( 0, len(sym)-1 ) ]
                elif random.randint(0,1000) > 9972 :
			ts[i] = tss[ random.randint( 0, len(tss)-1 ) ]


print 'Time\tEvent\n0\t:\n',

for i in xrange(len(ts)):
	 if ts[i] != '-':
	 	print i,'\t',ts[i],'\n',

print len(ts),'\t&\n',

for i in xrange(len(ts)):
	 	print ts[i],
print '\nNZel ', len( [i for i in ts if i != '-'] )
	
