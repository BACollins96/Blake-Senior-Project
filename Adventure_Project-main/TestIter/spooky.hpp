#ifndef SPOOK
#define SPOOK

#include <ncurses.h>
#include <stdlib.h>

class GhostManor{
	public:
		bool introduction();
		bool FirstRoom();	
		bool FirstRoom(char choices[], int size);
		bool SecRoom();
		bool SecRoom(char choices[], int size);
		bool FinRoom();
		bool FinRoom(char choices[], int size);
};

#include "spooky.cpp"

#endif
