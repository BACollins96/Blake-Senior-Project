#ifndef SPOOK
#define SPOOK

#include <ncurses.h>
#include <stdlib.h>

class GhostManor{
	public:
		bool introduction();
		bool FirstRoom1();	
		bool FirstRoom2();	
		bool SecRoom();
		bool FinRoom1();
		bool FinRoom2();
};

#include "spooky.cpp"

#endif
