GCC = gcc
AR = ar -rcs
FLAGS = -Wall -g


my_mat.o: my_mat.c my_mat.h
	$(GCC) $(FLAGS) -fPIC -c my_mat.c 

main.o: main.c my_mat.h
	$(GCC) $(FLAGS) -fPIC -c main.c

connections:my_mat.o main.o
	$(GCC) $(FLAGS) -o connections my_mat.o main.o -lm

all: connections main.o my_mat.o

clean: 
	rm -f *.o connections