#include <string>
#include <ncurses.h>

#include "game.h"

WINDOW* wnd;

int init() {
	wnd = initscr();
	cbreak();
	noecho();
	clear();
	refresh();

	return 0;
}

void run() {
	
	move(5,5);

	std::string text = "Hello World";
	for(auto c : text) {
		addch(c);
		addch(' ');
	}
	refresh();
	
	while(1);
}

void close() {
	endwin();
}
