import os, sys
mult = 10
f = open('grooming.csv', 'r') 
lines = f.readlines()
f.close()
lines.pop(0) # get rid of lalbels line
acts = []
animals = {}
for line in lines:
    cells = [ s.strip('"').replace(' ', '_') for s in line.split(',') ]
    acts.append( cells[3] )
                           #group
    if cells[ 0 ] not in animals:
        #Group   act  time
        animals[ cells[0] ] = [ cells[2], [], [] ]
    animals[ cells[0] ][1].append( cells[3] )
    animals[ cells[0] ][2].append( int( float(cells[4])*mult ) )

for i, val in enumerate( animals.itervalues() ):
    print 'RR', val[0].strip(' ') + '_' + str( i ) + '.txt'
    f = open(val[0].strip(' ') + '_' + str( i ) + '.txt', 'w' )
    f.write('Time\tEvent\n0\t:\n')
    print len( val[1:3] ), len( val[1] ), len( val[2] )
    for act, time in zip(val[1], val[2]):
        f.write( str(time)+'\t'+act+'\n' )
    f.write( str( time + 1 ) + '\t&\n' )
    f.close()
    
acts  = set( acts )
print "%s "%'\n'.join(acts)