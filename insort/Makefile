CC = clang
FLAGS = -g  -o
EXECUTABLE = main

main: ./src/main.c ./src/insort.c
	$(CC) ./src/main.c ./src/insort.c $(FLAGS) $(EXECUTABLE)

run: main
	./$(EXECUTABLE)
