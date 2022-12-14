output: main.o child.o runPython.o cpCreation.o
	gcc main.o child.o runPython.o cpCreation.o -o output
main.o: main.c child.h cpCreation.h runPython.h
	gcc main.c -c
child.o: child.c
	gcc child.c -c
cpCreation.o: cpCreation.c
	gcc cpCreation.c -c
runPython.o: runPython.c
	gcc runPython.c -c
clean:
	rm *.o output
run:
	./output	