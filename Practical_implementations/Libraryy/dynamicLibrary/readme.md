Try to keep same name for library and header files.

Move / Copy your library file[.so] to /usr/lib/

Move / Copy your header file[.h] to /usr/include/

run command:

    sudo ldconfig
    
Compile main file  with linker

    gcc filename.c -o filename.o -l<libname>
