#pragma once
#include <iostream>
#include "shape.h"
using namespace std;

class Rectangle : public Shape {
public:
	using Shape::Shape;
	virtual void Fill();
	Rectangle(int h, int w, char s, string c);
	Rectangle(int h, char s, string c);
	Rectangle(Rectangle& p);
};
