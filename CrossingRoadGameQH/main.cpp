#include"Game.h"
using namespace std; 



int main() {
	Game::FixConsoleWindow(); 
	Game game; 
	Game::gotoOxy(100, 100);
	
	cout << "hello"; 	
	
	return 0; 
}