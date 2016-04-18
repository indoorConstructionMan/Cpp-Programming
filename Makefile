make:
	g++ -Wall -o program main.cpp structure.cpp

run:
	./program.exe

clean:
	rm program.exe
