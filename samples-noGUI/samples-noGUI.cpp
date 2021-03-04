#include "samples-noGUI.h"
#include <iostream>
#include "box2d-lite/MathUtils.h"

int main()
{
	Vec2 myVector;
	float x, y;
	float length = 0;
	std::cout << "Enter x coordinate" << std::endl;
	std::cin >> x;
	std::cout << "Enter y coordinate" << std::endl;
	std::cin >> y;
	myVector.Set(x, y);
	length = myVector.Length();
	std::cout << "Vector length is " << length << std::endl;
	return 0;
}
