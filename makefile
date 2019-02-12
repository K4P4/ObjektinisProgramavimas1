CXX = clang++
CC = clang

all:	Objektinis1

test:	all
	./Objektinis1

clean:
	rm -f *.o Objektinis1
