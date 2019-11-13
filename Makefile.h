# -- Makefile --

CC= gcc
AR= ar
OBJ_M= main.o myMath.h
OBJ= basicMath.o power.o
FLAGS= -Wall -g
all: mymaths mymathd mains maind

mymaths: $(OBJ)
	$(AR) rcs libmyMath.a $(OBJ)

basicMath.o: basicMath.c 
	$(CC) $(FLAGS) -c basicMath.c

power.o: power.c 
	$(CC) $(FLAGS) -c power.c

mymathd: $(OBJ)
	$(CC) -shared -o libmyMath.so $(OBJ)

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

mains: $(OBJ_M) $(OBJ)
	$(CC) $(FLAGS) -static main.o -L. -lmyMath -o mains

maind: $(OBJ_M) $(OBJ)
	$(CC) $(OBJ_M) -L -lmyMath -o maind $(OBJ)

.PHONY: clean all

clean:
	 rm -f *.o *.a *.so mains maind
