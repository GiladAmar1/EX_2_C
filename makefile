all: myBank.c myBank.h main.o

myBank.h: myBank.o
	ar rs libmyBank.a myBank.o
myBank.a: myBank.c
	gcc -c myBank.c
main.o: libmyBank.a
	gcc -c main.c
	gcc -o main main.c libmyBank.a
clean:
	rm -f *.o *.a *.so main	
