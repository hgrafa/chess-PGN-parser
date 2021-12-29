#this target will compile all
default: 
	make catcher

# make targets ###########################

catcher: catcher.o main.o
	g++ -std=c++11 catcher.o main.o -o test

interpreter: interpreter.o main.o
	g++ -std=c++11 interpreter.o main.o -o test

printer: printer.o main.o
	g++ -std=c++11 printer.o main.o -o test
##########################################

# OBJECT FILES#######################
main.o: main.cpp
	g++ -std=c++11 -c main.cpp

data.o: data.cpp data.h
	g++ -std=c++11 -c data.cpp

catcher.o: catcher.cpp catcher.h 
	g++ -std=c++11 -c catcher.cpp

interpreter.o: interpreter.cpp interpreter.h
	g++ -std=c++11 -c interpreter.cpp

printer.o: printer.cpp printer.h
	g++ -std=c++11 -c printer.cpp
# ###################################3333

clean:
	rm -rf *.o *.out test

# g++ -c files.cpp -o files.o
# g++ -c test.cpp -o test.o
# g++ files.o files.o -o this
# ./this
