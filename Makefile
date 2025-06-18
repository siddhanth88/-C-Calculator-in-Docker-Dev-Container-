all: app

app: main.o utils.o
	gcc main.o utils.o -o app

main.o: main.c utils.h
	gcc -c main.c

utils.o: utils.c utils.h
	gcc -c utils.c

clean:
	rm -f *.o app
