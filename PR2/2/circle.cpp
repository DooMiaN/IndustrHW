#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "circle.h"

using namespace std;

circle::circle() {
	x_center = 0;
	y_center = 0;
	radius = 0;
}

circle::circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

void circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

float circle::square() {
	return radius * radius * M_PI;
}

bool circle::triangle_around(float a, float b, float c) {
	double p = (a + b + c) / 2;
	return ((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))) == radius;
}

bool circle::triangle_in(float a, float b, float c) {
	double p = (a + b + c) / 2;
	return (sqrt(((p - a) * (p - b) * (p - c)) / p)) == radius;
}

bool circle::check_circle(float r, float x_cntr, float y_cntr)
{
	return sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2)) < radius;;
}
