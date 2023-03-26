#include <iostream>
#include "Cone.h"

using namespace std;

const double pi = 3.14159265;
Cone::Cone() {
	x = y = z = radius = height = 0;
}
Cone::Cone(double r, double h) {
	x = y = z = 0.0;
	radius = r;
	height = h;
}
Cone::Cone(double a, double b, double c, double r, double h) {
	x = a;
	y = b;
	z = c;
	radius = r;
	height = h;
}
void Cone::setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
void Cone::setRadius(double r) { radius = r; }
void Cone::setHeight(double h) { height = h; }
double Cone::getRadius() { return radius; }
double Cone::getHeight() { return height; }

double Cone::area() {
	double l = sqrt(height * height + radius * radius);
	return pi * radius * (radius + l);
}

double Cone::volume() {
	return pi * radius * radius * height / 3;
}

ostream &operator<<(ostream &stream, Cone obj)
{
	stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << "), radius = " << obj.radius << ", height = " << obj.height << endl;
	return stream;
	// TODO: вставьте здесь оператор return
}

