all:
	g++ -o spook main.cpp -lncurses
	./spook

test:
	g++ tests.cpp -lgtest -lpthread -lncurses -o test
	./test

clean:
	rm spook
	rm test
