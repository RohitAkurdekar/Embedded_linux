output: add.o sub.o mul.o div.o calci.o
	ar rs libbasic.a add.o sub.o mul.o div.o
add.o: add.c
	gcc add.c -c
sub.o: sub.c
	gcc sub.c -c
mul.o: mul.c
	gcc mul.c -c
div.o: div.c
	gcc div.c -c
calci.o: calci.c basic.h
	gcc calci.c -c 
clean:
	rm *.o targetoutput libbasic.a
build:
	gcc -o targetoutput calci.o libbasic.a
run:
	./targetoutput