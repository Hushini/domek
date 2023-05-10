#include <iostream>
#include <vector>

using namespace std;

#include "forest.h"

int Shape::counter = 0;

int main()
{
	Forest forestt = Forest(15, 60);
    Trapez* roof = new Trapez(4, '*', "red");
	Rectangle* wall = new Rectangle(6, 14, '*', "yellow");
	Rectangle* door = new Rectangle(4, 4, '*', "red");
	Rectangle* trunk = new Rectangle(4, 3, '*', "red");
	Border* window = new Border(3, 6, '*', "green", 1);
	Triangle* treee = new Triangle(6, '*', "green");


	roof->SetXY(1, 1);
	forestt += roof;
	wall->SetXY(5, 4);
	forestt += wall;
	door->SetXY(7, 5);
	forestt += door;
	window->SetXY(6, 11);
	forestt += window;

	forestt.AddShape(treee, 1, 25);
	forestt.AddShape(trunk, 7, 29);


	forestt.PrintForest();

}
