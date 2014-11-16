LinkedList: LinkedList.o
	gcc -o LinkedList LinkedList.o
linkedList.o: LinkedList.c LinkedList.h
	gcc -c LinkedList.c
clean:
	rm -f *.o
