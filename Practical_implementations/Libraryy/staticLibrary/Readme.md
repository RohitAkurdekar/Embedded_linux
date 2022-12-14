Try to keep same name for library and header files.

Compile all definition files

archive each output[.o] file with using following command:

    ar rs lib<libraryname>.a 1.o 2.o 3.o .... n.o

Compile main file 

Link main.o file with static library:

    gcc -o targetoutput filename.o lib<libraryname>.a
