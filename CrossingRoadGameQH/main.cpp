#include"Game.h"
using namespace std; 

int x = 50, y = 3;


int main() {
	Game::FixConsoleWindow(); 
	Game::clrscr(); 
	Game::txtColor(10);    
	Game::Nocursortype(); 

	/*Game::gotoOxy(10, 1); 
	for (int i = 0; i < 20; i++) {
		Game::gotoOxy(10 + i, 1); 
		cout << UP_BLACK_PIECE;
	}
	for (int i = 0; i < 20; i++) {
		Game::gotoOxy(10 + 20, 1 + i); 
		cout << UP_BLACK_PIECE; 
	}
	for (int i = 0; i < 20; i++) {
		Game::gotoOxy(10 + 20 - i, 1 + 20);
		cout << UP_BLACK_PIECE;
	}*/
	/*for (int i = 0; i < 20; i++) {
		Game::gotoOxy(10)
	}*/
	Game game; game.drawMenu(); 
	
	return 0; 
}