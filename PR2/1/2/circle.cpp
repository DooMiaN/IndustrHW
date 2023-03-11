#include <iostream>
#include <cmath>
#include "circle.h"

using namespace std;

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

float cirlce::square() {
	return radius * raduis * M_PI;
}

bool circle::triangle_around(float a, float b, float c) {
	double p = (a + b + c) / 2;
	return a * b * c / (4 * sqrt(p * (p - a) * (p - b) * (p - c))) == radius;
}

bool circle::triangle_in(float a, float b, float c) {
	double p = (a + b + c) / 2;
	return (sqrt((p - a) * (p - b) * (p - c) / p)) == radius;
}

bool check_circle(float r, float x_cntr, float y_cntr) {
	return sqrt(pow((x_cntr - x), 2) + pow((y_cntr - y), 2)) < radius;
}
