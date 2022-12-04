#pragma once
#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<string>
#include<vector>
using namespace std; 

#define KEY_DOWN 80
#define KEY_UP 72
#define KEY_ESC 27
#define KEY_ENTER 13


#define VERTICAL_PALE_PIECE char(186)
#define DOWN_BLACK_PIECE char(220)
#define UP_BLACK_PIECE char(223)


class Game {
	
public: 
	static void FixConsoleWindow(); 
	static void SetWindowSize(SHORT width, SHORT height); 
	static void gotoOxy(int x, int y);
    static void clrscr(); 
	static void Nocursortype() {
		CONSOLE_CURSOR_INFO Info;
		Info.bVisible = FALSE;
		Info.dwSize = 20;
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
	}
	static void txtColor(int color) {
		HANDLE hConsoleColor;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	}

	void startGame();
	void drawMenu(); 
	void menu(int active = 0, int color = 10) {
		int x = 50, y = 3; 
		Game::txtColor(color);
		if (active == 0) {
			Game::gotoOxy(x + 5, y + 3); cout << "New Game";
			Game::gotoOxy(x + 5, y + 5); cout << "Settings";
			Game::gotoOxy(x + 5, y + 7); cout << "Exit";
		}
		if (active == 1) {
			Game::txtColor(color);
			Game::gotoOxy(x + 5, y + 3); cout << "NEW GAME";
			Game::txtColor(10);
			Game::gotoOxy(x + 5, y + 5); cout << "Settings";
			Game::gotoOxy(x + 5, y + 7); cout << "Exit";
		}
		if (active == 2) {
			Game::txtColor(color);
			Game::gotoOxy(x + 5, y + 5); cout << "SETTINGS";
			Game::txtColor(10);
			Game::gotoOxy(x + 5, y + 3); cout << "NEW GAME";
			Game::gotoOxy(x + 5, y + 7); cout << "Exit";
		}
		if (active == 3) {
			Game::txtColor(color);
			Game::gotoOxy(x + 5, y + 7); cout << "Exit";
			Game::txtColor(10);
			Game::gotoOxy(x + 5, y + 3); cout << "NEW GAME";
			Game::gotoOxy(x + 5, y + 5); cout << "Settings";
		}
	}

};











