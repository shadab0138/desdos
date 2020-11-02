CC=gcc

arith:arith.o add.o sub.o multiplication.o
	$(CC) -o arith arith.o add.o sub.o	multiplication.o
arith.o:arith.c
	$(CC) -c -o arith.o arith.c	
add.o:add.c
	$(CC) -c -o add.o add.c
sub.o:sub.c
	$(CC) -c -o sub.o sub.c
multiplication.o:multiplication.c
	$(CC) -c -o multiplication.o multiplication.c

clean:
	rm -rf *.o arith

