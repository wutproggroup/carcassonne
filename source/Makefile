# A simple Makefile for compiling small SDL projects

# set the compiler
CC := gcc

# set the compiler flags
CFLAGS := `sdl2-config --libs --cflags` -ggdb3 -O0 --std=c99 -Wall -lSDL2_image -lm

# add header files here
HDRS :=

# add source files here
SRCS := main.c

# generate names of object files
OBJS := $(SRCS:.c=.o)

# name of executable
EXEC := carcassonne

# default recipe
all: $(EXEC)

# recipe for building the final executable
$(EXEC): $(OBJS) $(HDRS) Makefile
	$(CC) -o $@ $(OBJS) $(CFLAGS)

# recipe for building object files
#$(OBJS): $(@:.o=.c) $(HDRS) Makefile
#	$(CC) -o $@ $(@:.o=.c) -c $(CFLAGS)

# recipe to clean the workspace
clean:
	rm -f $(EXEC) $(OBJS)

.PHONY: all clean




#CFLAGS=-std=c11 -Wall -Wextra -Wlogical-op -Wdouble-promotion -Wconversion -Wsign-conversion -Wshadow -Wformat=2 -g  -Wjump-misses-init -pedantic

# delete useless flags

#carcassonne: main.o map.o algo.o tile.o user.o
#	$(CC) $(CFLAGS) main.o map.o algo.o tile.o user.o -o carcassonne

#clean:
#	rm *.o

#carcassonne: main.o map.o tile.o 
#	$(CC) $(CFLAGS) main.o map.o tile.o -o carcassonne

#clean:
#	rm *.o

# CFLAGS = -O3
# LDFLAGS =
# carcassonne = test

# all: $(carcassonne)
# clean:
# 	rm -f $(carcassonne) *.o
# .PHONY: all clean

# sdl_cflags := $(shell pkg-config --cflags sdl2 SDL2_mixer)
# sdl_libs := $(shell pkg-config --libs sdl2 SDL2_mixer)
# override CFLAGS += $(sdl_cflags)
# override LIBS += $(sdl_libs)

# $(carcassonne): test.o
#     $(CC) $(LDFLAGS) -o $@ $^ $(LIBS)