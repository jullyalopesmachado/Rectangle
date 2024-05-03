#include <iostream>
#include <cmath>
using namespace std;
#include "rectangle.h"

int main(){

	double length;
	double width;

	cout << "Input length: ";
	cin >> length;

	cout << "input width: ";
	cin >> width;

	Rectangle rectangle (length, width);

	//rec area
	
	double area = rectangle.CalcArea();

	cout << "Area is: " << area << endl;

	double perimeter = rectangle.CalcPerimeter();

	cout << "Perimeter is: " << perimeter << endl;

	return 0;

}
