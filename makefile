all: prog_final 

program.o: program.cpp program.h
	g++ -c program.cpp

main.o:	main.cpp 
	g++ -c main.cpp

prog_final: program.o main.o 
	g++ -o prog_final main.o program.o

clean:
	rm -f *.o prog_final

test: all
	./prog_final
