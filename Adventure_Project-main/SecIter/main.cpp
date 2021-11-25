#include <curses.h>
#include <iostream>
#include "spooky.hpp"

using namespace std;

int main(){
	GhostManor first;

	if(first.introduction() == true){
		cout << "currently works" << endl;
	}

return 0;
}
