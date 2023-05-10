#include "rectangle.h"

class Trapez : public Rectangle{
public:
	int margin;
	Trapez(int h, char s, string c);
	void Cut();
};

