
CFLAGS=-std=c11 -Wall -Wextra -Wlogical-op -Wdouble-promotion -Wconversion -Wsign-conversion -Wshadow -Wformat=2 -g  -Wjump-misses-init -pedantic

# delete useless flags

#carcassonne: main.o map.o algo.o tile.o user.o
#	$(CC) $(CFLAGS) main.o map.o algo.o tile.o user.o -o carcassonne

#clean:
#	rm *.o

carcassonne: main.o map.o tile.o 
	$(CC) $(CFLAGS) main.o map.o tile.o -o carcassonne

clean:
	rm *.o
