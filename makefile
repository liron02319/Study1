CC=gcc 
AR=ar
FLAGS= -Wall -g 
OBJECTS_MAIN=main.o
OBJECTS_LIB=power.o basicMath.o myMath.h


all: mymathd mymaths mains maind

mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(Flags) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN)
	$(CC) $(Flags) -o maind $(OBJECTS_MAIN) ./libmyMath.so

mymathd: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
mymaths: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
power.o: power.c
	$(CC) -fPIC $(FLAGS) -c power.c
basicMath.o: basicMath.c
	$(CC) $(FLAGS) -c basicMath.c

.PHONY: clean all

clean: 
	rm -f *.o mains maind libmyMath.so libmyMath.a


