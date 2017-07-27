#include <iostream>


class Rectangle {
public:
	void display();
	int width, height;

};

void Rectangle::display() {
	std::cout << width << " " << height << std::endl;
}

class RectangleArea : public Rectangle
{
public:
	void read_input();
	void display();
};

void RectangleArea::read_input() {
	std::cin >> width;
	std::cin >> height;
}

void RectangleArea::display() {
	std::cout << width * height << std::endl;
}


int main()
{
	/*
	* Declare a RectangleArea object
	*/
	RectangleArea r_area;

	/*
	* Read the width and height
	*/
	r_area.read_input();

	/*
	* Print the width and height
	*/
	r_area.Rectangle::display();

	/*
	* Print the area
	*/
	r_area.display();

	return 0;
}