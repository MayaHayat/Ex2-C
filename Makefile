CC = gcc
AR = ar -rcs
FLAGS = -Wall -g 

#Creating our o files:
main.o: main.c
	$(CC) $(FLAGS) -fPIC -c main.c

my_mat.o: my_mat.c 
	$(CC) $(FLAGS) -fPIC -c my_mat.c 

# Creating the library:
my_mat.a: my_mat.o
	$(AR) my_mat.a my_mat.o
	ranlib my_mat.a 

## Creating connections:
connections: my_mat.a main.o
	$(CC) $(FLAGS) main.o my_mat.a -o connections -lm

all: connections

clean: 
	rm -f *.o *.a connections

.PHONY: clean all