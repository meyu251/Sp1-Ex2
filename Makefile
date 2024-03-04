#Define variables
FILES = my_graph.c my_mat.c my_mat.h my_Knapsack.c

.PHONY: all clean

clean:
	rm -f *.o my_graph

#create main file:
my_graph: my_graph.o my_mat.o
	gcc -Wall -g -o my_graph my_graph.o my_mat.o

#create o files:
my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -fPIC -c my_mat.c -o my_mat.o

my_graph.o: my_graph.c my_mat.h
	gcc -Wall -g -fPIC -c my_graph.c -o my_graph.o