#include <iostream>
#include <cmath>
#ifndef RECTANGLE_H
#define RECTANGLE_H

//Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.

class Rectangle{

	private:

		double length;
	       	double width;

	public:

	Rectangle (double leng, double wid): length (leng), width (wid) {}


	double CalcPerimeter();
	double CalcArea();


};

#endif
