CC=gcc 
AR=ar
FLAGS= -Wall -g 
OBJECTS_MAIN=main.o
OBJECTS_LIB=myBank.o


all: mybanks mains

mains: $(OBJECTS_MAIN) libmybank.a
	$(CC) $(Flags) -o mains $(OBJECTS_MAIN) libmybank.a


mybanks:libmybank.a

libmybank.a: $(OBJECTS_LIB)
	$(AR) -rcs -o libmybank.a  $(OBJECTS_LIB) 

main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c

myBank.o: myBank.c myBank.h
	$(CC) -fPIC $(FLAGS) -c myBank.c


.PHONY: clean all mybanks

clean: 
	rm -f *.o mains libmybank.a


