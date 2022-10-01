.PHONY : all
CC := gcc
CFLAGS := -I.
 all:
	$(CC) bai1.c -o bai1
	$(CC) bai2.c -o bai2
	$(CC) bai3.c -o bai3
	$(CC) bai4.c -o bai4
bai1.o: bai1.c
	$(CC) -c $< 
bai2.o: bai2.c
	$(CC) -c $< 
%o:%c
	$(CC) -c $<
clean:
	rm -rf *o bai1
	rm -rf *o bai2
	rm -rf *o bai3
	rm -rf *o bai4 
