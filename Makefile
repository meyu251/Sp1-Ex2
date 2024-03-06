#Define variables
FLAGS = gcc -Wall -g

.PHONY: all clean

all: my_graph my_Knapsack

clean:
	rm -f *.o my_graph my_Knapsack


#create main file:
my_graph: my_graph.o my_mat.o
	$(FLAGS) -o my_graph my_graph.o my_mat.o

my_Knapsack: my_Knapsack.o
	$(FLAGS) -o my_Knapsack my_Knapsack.o


#create o files:
my_mat.o: my_mat.c my_mat.h
	$(FLAGS) -fPIC -c my_mat.c -o my_mat.o

my_graph.o: my_graph.c my_mat.h
	$(FLAGS) -fPIC -c my_graph.c -o my_graph.o

my_Knapsack.o: my_Knapsack.c
	$(FLAGS) -fPIC -c my_Knapsack.c -o my_Knapsack.o