#include <iostream>
#include <cmath>

const double pi = 3.14159265359;

double volume(double);
double volume(double, double);
void rectangleArea(int, int , int&);

int main()
{
	std::cout << "Enter the radius of sphere : ";
	double radius = 0.0;
	std::cin >> radius;
	std::cout << "Volume of sphere is equal to " << volume(radius) << std::endl;
	std::cout << "Enter the radius of cylinder : ";
	std::cin >> radius;
	std::cout << "Enter the height of cylinder : ";
	double height = 0.0;
	std::cin >> height;
	std::cout << "Volume of cylinder is equal to " << volume(radius, height) << std::endl;
	int area = 0;
	int h = 7, w = 4;
	std::cout <<"area = "<< area << std::endl;
	rectangleArea(h, w, area);
	std::cout <<"area = "<< area << std::endl;
	return 0;
}

double volume(double r)
{
	return (4 * pi * pow(r, 3))/3.0;
}

double volume(double r, double h)
{
	return (pi * pow(r, 2) * h);
}

void rectangleArea(int w, int h, int& area)
{
    area = h * w;
}

// int number = 3;
// const int * pNum1 = &number;
// *pNum1 = 20;                      //error!!!
// int* pNum2 = pNum1;
// number *= 2;
// cout << * pNum2;
