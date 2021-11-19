#include <ncurses.h>
#include <string>

using namespace std;
int main (){
	
	initscr();
	noecho(); //menahan program sementara
	cbreak();
	
	int ymax, xmax;
	getmaxyx(stdscr, ymax, xmax);
	
	WINDOW* menuwin = newwin (6, xmax-12, ymax-8, 5);
	box(menuwin, 0, 0);
	refresh ();
	wrefresh(menuwin);
	 
	// we can use arroe keys
	keypad(menuwin, true);
	
	string choices[3] = {"saya", "kamu", "dia"};
	int choice;
	int highlight=0; 
	
	while(true){
		for(int i=0 ; i<3 ; i++ ) {
			if (i==highlight)
			    wattron(menuwin, A_REVERSE);
			    mvwprintw(menuwin,i+1,i+1, choices[i].c_str());
			    wattroff (menuwin, A_REVERSE);
}
	
	choice= wgetch(menuwin);
	
	switch(choice){
		case KEY_UP:
			highlight--;
			if (highlight==1){
			highlight=0;
			}
			break;
		case KEY_DOWN:
			highlight++;
			highlight--;
			if (highlight==3){
			highlight=1;
			}
			break;
		default:
		break;
	}
	if (choice==10)
	break;
		
	}
	
	
	getch ();
	endwin();
	
	refresh();
	   	
	
	
	
	
	
}
