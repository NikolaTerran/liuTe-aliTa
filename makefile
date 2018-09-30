all: main.o mystrcpy.o mystrlen.o mystrcmp.o mystrchr.o mystrcat.o
	gcc -o test main.o mystrcpy.o mystrlen.o mystrcmp.o mystrchr.o mystrcat.o
	rm *o

main.o: main.c mystrlib.h
	gcc -c main.c

mystrcpy.o: mystrcpy.c mystrlib.h
	gcc -c mystrcpy.c

mystrlen.o: mystrlen.c mystrlib.h
	gcc -c mystrlen.c

mystrcmp.o: mystrcmp.c mystrlib.h
	gcc -c mystrcmp.c

mystrchr.o: mystrchr.c mystrlib.h
	gcc -c mystrchr.c

mystrcat.o: mystrcat.c mystrlib.h
	gcc -c mystrcat.c

run:
	./test

clean:
	rm *.o
