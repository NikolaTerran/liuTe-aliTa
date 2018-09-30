all: main.o mystrcpy.o mystrlen.o mystrcmp.o
	gcc -o test main.o mystrcpy.o mystrlen.o mystrcmp.o

main.o: main.c mystringlib.h
	gcc -c main.c

mystrcpy.o: mystrcpy.c mystringlib.h
	gcc -c mystrcpy.c

mystrlen.o: mystrlen.c mystringlib.h
	gcc -c mystrlen.c

mystrcmp.o: mystrcmp.c mystringlib.h
	gcc -c mystrcmp.c

run:
	./test

clean:
	rm *.o
