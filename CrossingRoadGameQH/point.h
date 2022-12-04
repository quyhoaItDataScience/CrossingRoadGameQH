#pragma once
#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
class point {
private:
	int x;
	int y;
	char c;
public:
	point();
	point(int, int, char);
	void setX(int);
	void setY(int);
	void setC(char);
	int getX();
	int getY();
	int getC();
};