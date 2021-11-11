#include <ncurses.h>
#include <iostream>

using namespace std;

int main (){
	
	initscr();
	refresh ();
	
	
	
	int h, w , y, x;
	
	h=w=20;
	y=x=5;
	
	WINDOW * halo = newwin(h,w,x,y);
	refresh();
	
	box (halo, 0,0)	;
	
	mvwprintw( halo, 2,2, "HALO");
	
	wrefresh(halo);
	
	refresh();
	wgetch(halo);
	getch();
	endwin();
	
	return 0;
	
}
