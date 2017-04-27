
#include "Rectangle.h"

	//Empty Constructor sets instantiates a rectangle with length and width set as 0
	Rectangle::Rectangle()
{
	length = 0;
	width = 0;
}

//Standard Constructor sets instantiates a rectangle with length and width set as input values
Rectangle::Rectangle(double input_length, double input_width)
{
	length = input_length;
	width = input_width;
}

//Setter and Getter functions
//void Rectangle::set_length(int input_length)
//{
//	length = input_length;
//}
//
//void Rectangle::set_width(int input_width)
//{
//	width = input_width;
//}
//
//int Rectangle::get_length(void) const
//{
//	return length;
//}
//
//int Rectangle::get_width(void) const
//{
//	return width;
//}

//Calculate Area of rectangle
double Rectangle::getArea(void)
{
	return length*width;
}

//Calculate volume of rectangle
double Rectangle::perimeter(void)
{
	return 0;
}

/*Addition operator overload
* We define addition of two rectangles to be as follows: R3 = R1 + R2
* where length of R3 = length R1 + length R2
* and width R3 = max(width R1, width R2)
*/
Rectangle Rectangle::operator + (const Rectangle& other) //a+b, a calls operator with b as argument
{
	int newlength = this.length + other.length;
	int newwidth = this.length + other.length;

	return Rectangle(newlength, newwidth);
}

/*Multiplication operator overload
* We define addition of two rectangles to be as follows: R3 = R1 * R2
* where length of R3 = length R1 + length R2
* and width R3 = width R1 + width R2
*/
Rectangle Rectangle::operator - (const Rectangle& other)
{
	double newlength;
	double newwidth;
	if (this.length > other.length) {
		newlength = this.length - other.length;
	}
	else {
		newlength = 0;
	}
	if (this.width > other.width) {
		newwidth = this.width - other.width;
	}
	else {
		newwidth = 0;
	}

	return Rectangle(newlength, newwidth);
}
