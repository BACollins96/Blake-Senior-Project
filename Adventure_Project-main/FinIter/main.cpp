#include <curses.h>
#include <iostream>
#include <chrono>
#include "spooky.hpp"

using namespace std;

int main(){
	GhostManor first;
	auto start = chrono::steady_clock::now();

	
	if(first.introduction() == true){
		auto end = chrono::steady_clock::now();
		
		cout << "Elapsed time in seconds: "
        << chrono::duration_cast<chrono::seconds>(end - start).count()
        << " sec" << endl;
		
	}

return 0;
}
