#include "Game.h"


void Game::FixConsoleWindow()
{
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}

void Game::SetWindowSize(SHORT width, SHORT height)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	SMALL_RECT WindowSize;
	WindowSize.Top = 0;
	WindowSize.Left = 0;
	WindowSize.Right = width;
	WindowSize.Bottom = height;

	SetConsoleWindowInfo(hStdout, 1, &WindowSize);
}

void Game::gotoOxy(int x, int y)
{
	static HANDLE h = NULL;
	if (!h)
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);
	
}

void Game::clrscr()
{
		COORD topLeft = { 0, 0 };
		HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_SCREEN_BUFFER_INFO screen;
		DWORD written;

		GetConsoleScreenBufferInfo(console, &screen);
		FillConsoleOutputCharacterA(
			console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
		);
		FillConsoleOutputAttribute(
			console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
			screen.dwSize.X * screen.dwSize.Y, topLeft, &written
		);
		SetConsoleCursorPosition(console, topLeft);

}

void Game::startGame()
{
	gotoOxy(10, 5); 
	cout << "Start game"; 
}

void Game::settingGame()
{
	gotoOxy(10, 10); 
	cout << "Setting game"; 
}

void Game::drawMenu()
{
	menu(); 
	int active = 0; 
	while (1) {
		char c = _getch();
		if (c == KEY_UP || c == 'w') {
			active--;
			if (active < 1) {
				active = 3;
			}
		}
		if (c == KEY_DOWN || c == 's') {
			active++;
			if (active > 3)
				active = 1;
		}
		// Dang viet Key enter
		if (c == KEY_ENTER) {
			if (active == 1) {
				clrscr(); 
				Game::gotoOxy(40, 40); 
				Game::txtColor(DEFAULT_COLOR); 
				startGame(); 
			}
			if (active == 2) {
				clrscr(); 
				Game::gotoOxy(40, 40);
				Game::txtColor(DEFAULT_COLOR);
				settingGame(); 
			}
			if (active == 3) {
				exit(1); 
			}
			break; 
		}
		clrscr(); 
		menu(active, 240);
	}

}

void gotooxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), c);
}


