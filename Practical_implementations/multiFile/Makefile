output: main.o add.o mul.o
	gcc main.o add.o mul.o -o output
main.o: main.c add.h mul.h
	gcc main.c -c
add.o: add.c
	gcc add.c -c
mul.o: mul.c
	gcc mul.c -c
clean:
	rm *.o output
run:
	./output

#make - generate object file
#make run #to run final object file (output)
#make clean - clean/remove all the .o extension and output file