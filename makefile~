CC = g++
CFLAGS  = -g -Wall

default: count

count:  Source.o vector.o matrix.o 
	$(CC) $(CFLAGS) -o ali Source.o vector.o matrix.o

Source.o:  Source.cpp matrix.h vector.h
	$(CC) $(CFLAGS) -c Source.cpp

vector.o:  vector.cc vector.h 
	$(CC) $(CFLAGS) -c vector.cc

matrix.o:  matrix.cc matrix.h 
	$(CC) $(CFLAGS) -c matrix.cc

clean: 
	$(RM) count *.o *~
