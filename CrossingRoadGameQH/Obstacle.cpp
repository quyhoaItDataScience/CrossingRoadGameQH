#include "Obstacle.h"
void goToXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void Obstacle::move() {
	for (int i = 0; i < p.size(); i++) {
		p[i].setX(p[i].getX() + direction);
	}
}
bool Obstacle::reachEndPoint(int x) {
	for (int i = 0; i < p.size(); i++) {
		if (p[i].getX() == x)
			return true;
	}
	return false;
}
void Obstacle::draw() {
	for (int i = 0; i < p.size(); i++) {
		goToXY(p[i].getX(), p[i].getY());
		cout << p[i].getC();
	}
}
void Obstacle::undraw() {
	for (int i = 0; i < p.size(); i++) {
		goToXY(p[i].getX(), p[i].getY());
		cout << " ";
	}
}
void Obstacle::undrawBack() {
	int back[3];
	back[0] = 0;
	back[1] = 0 + shape[0].size();
	back[2] = back[1] + shape[1].size();
	for (int i = 0; i < 3; i++) {
		point tmp = p[back[i]];
		goToXY(tmp.getX(), tmp.getY());
		cout << " ";
	}
}