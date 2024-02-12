CC = clang
FLAGS = -g  -o
EXECUTABLE = main

main: ./src/main.c ./src/linsearch.c
	$(CC) ./src/main.c ./src/linsearch.c $(FLAGS) $(EXECUTABLE)

run: main
	./$(EXECUTABLE)
