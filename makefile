LinkedList: linkedList.o
	gcc -o linkedList linkedList.o
linkedList.o: linkedList.c linkedList.h
	gcc -c linkedList.c
clean:
	rm -f linkedList.o
