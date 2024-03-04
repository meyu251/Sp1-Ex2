#Define variables
FILES = my_graph.c my_mat.c my_mat.h my_Knapsack.c

.PHONY: all clean

all: my_graph my_Knapsack

clean:
	rm -f *.o my_graph my_Knapsack


#create main file:
my_graph: my_graph.o my_mat.o
	gcc -Wall -g -o my_graph my_graph.o my_mat.o

my_Knapsack: my_Knapsack.o
	gcc -Wall -g -o my_Knapsack my_Knapsack.o


#create o files:
my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -fPIC -c my_mat.c -o my_mat.o

my_graph.o: my_graph.c my_mat.h
	gcc -Wall -g -fPIC -c my_graph.c -o my_graph.o

my_Knapsack.o: my_Knapsack.c
	gcc -Wall -g -fPIC -c my_Knapsack.c -o my_Knapsack.o