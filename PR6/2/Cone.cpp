#include "trunccone.h"
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

ostream& operator<<(ostream& stream, Cone obj)
{
	stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << "), radius = " << obj.radius << ", height = " << obj.height << endl;
	return stream;
	// TODO: вставьте здесь оператор return
}

trunccone::trunccone() {
	height2 = 0;
	radius2 = 0;
}

trunccone::trunccone(double r, double r2, double h2) : Cone(r, h2 * r / r2) {
	height2 = h2;
	radius2 = r * h2 / Cone::height;
}

double trunccone::area() {
	double l = sqrt(height2 * height2 + (radius - radius2) * (radius - radius2));
	return pi * (radius + radius2) * l + pi * radius * radius + pi * radius2 * radius2;
}

double trunccone::volume() {
	double l = sqrt(height2 * height2 + (radius - radius2) * (radius - radius2));
	return pi * height2 * (radius2 * radius2 + radius2 * radius + radius * radius) / 3;
}

ostream& operator<< (ostream& stream, trunccone obj) {
	stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << "), lower radius = " << obj.radius << ", upper radius = " << obj.radius2 << ", height = " << obj.height2 << endl;
	return stream;
}

istream& operator>> (istream& stream, trunccone& obj) {
	stream >> obj.x >> obj.y >> obj.z >> obj.radius >> obj.radius2 >> obj.height2;
	return stream;
}