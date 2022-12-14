output: add.o sub.o mul.o div.o calci.o
	gcc -shared -o libbasic.so add.o sub.o mul.o div.o
add.o: add.c
	gcc add.c -c -fPIC
sub.o: sub.c
	gcc sub.c -c -fPIC
mul.o: mul.c
	gcc mul.c -c -fPIC
div.o: div.c
	gcc div.c -c -fPIC
calci.o: calci.c basic.h
	gcc calci.c -c  -fPIC
clean:
	rm *.o targetoutput libbasic.so
build:
	gcc -o targetoutput -L . calci.o libbasic.so
run:
	./targetoutput