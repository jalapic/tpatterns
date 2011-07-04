#!/bin/sh

##count number of operations. BTW progrma must be compiled with COUNT_OP flag defined
# for N in 10 50 100 300 600 1000 1500 2000
# do
#   echo "=====$N"
#   echo "($N^3)/3" | bc -l 
#   ./main $N 1 | grep "All="
# done

##measure times
for threads in 1 2 4 8 10 16 20
do
  echo "$threads threads:"
  for N in 2#3 #0 1 2 #3 
  do
    avg_time="0.0"
    for i in `seq 2` #do it 4 times and take average
    do
        export OMP_NUM_THREADS=$threads
      #ct=`nice -6 time -f '%e' 2>&1 ./main $N $threads > /dev/null`
        ct=`time -f '%e' 2>&1 ./t_pattern_core -i artificial_data/T2_5.txt -o results/trash.txt -s 0.01 -n 4 -q ci_longest -e > /dev/null`
       
        #ct=`nice -6 ./main $N $threads`
        avg_time=`echo "$ct + $avg_time"| bc -l` 
    done
    time=`echo "$avg_time/2"|bc -l`
    echo "($N) $time "
  done
done