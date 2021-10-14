all: main.o mystructs.o
	gcc -o a.out main.o mystructs.o

main.o: main.c mystructs.o
	gcc -c main.c

mystructs.o: mystructs.c mystructs.h
	gcc -c mystructs.c

run:
	./a.out

comprun: all
	./a.out

clean:
	rm a.out
	rm *.o
