#pragma once
#include<iostream>
#include<Windows.h>
#include<string>
#include<vector>
using namespace std; 

#define KEY_DOWN 80
#define KEY_UP 72
#define KEY_ESC 27
#define KEY_ENTER 13

#define DOWN_BLACK_PIECE char(220)


class Game {
	
public: 
	static void FixConsoleWindow(); 
	static void SetWindowSize(SHORT width, SHORT height); 
	static void gotoOxy(int x, int y); 

	void startGame(); 
};

void gotooxy(int, int); 








