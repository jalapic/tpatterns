import sys
args = sys.argv
fname = args[1] 
fp = open( fname, 'r' )
lines = fp.readlines()
#read only event column
ts = [ a.split(' ')[-2] for a in lines ]
#cut first header row
ts = ts[ 1: ]
prev = ''
print 'Time\tEvent\n',
print '0\t:\n',
for i in enumerate(ts):
  if i[1] != prev:
    print '%d\tact%s\n'%(i[0],i[1]),
    prev = i[ 1 ]
print i[0], '\t&'