Project: t_patterns
CFLAGS = -Wall  -pedantic -O3 -fopenmp 

t_patterns: t_helper.o t_pattern.o t_time_sequence.o main.o t_output.o
	gcc $(CFLAGS) -o t_pattern_core obj/t_helper.o obj/t_pattern.o obj/t_time_sequence.o obj/main.o obj/t_output.o -lm


t_output.o: src/t_output.c
	gcc $(CFLAGS) -c src/t_output.c -o obj/t_output.o 

main.o: src/main.c
	gcc $(CFLAGS) -c src/main.c -o obj/main.o 

t_helper.o: src/t_helper.c 
	gcc $(CFLAGS) -c src/t_helper.c -o obj/t_helper.o 

t_pattern.o: src/t_pattern.c
	gcc $(CFLAGS) -c src/t_pattern.c -o obj/t_pattern.o 

t_time_sequence.o: src/t_time_sequence.c
	gcc $(CFLAGS) -c src/t_time_sequence.c -o obj/t_time_sequence.o 

