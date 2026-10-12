library:main.o library.o file.o 
	cc main.o library.o file.o -o library

main:main.c library.h file.h types.h
	cc -c main.c

library.o:library.c library.h types.h
	cc -c library.c

file.o:file.c file.h types.h
       cc -c file.c

clean:
rm -f *.o library
