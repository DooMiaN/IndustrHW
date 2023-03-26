#pragma once
#include "Cone.h"
#include <iostream>
using namespace std;

class trunccone : public Cone {
protected:
	double height2;
	double radius2;
public:
	trunccone();
	trunccone(double r, double r2, double h2);
	double area();
	double volume();
	friend ostream& operator<< (ostream& stream, trunccone obj);
	friend istream& operator>> (istream& stream, trunccone& obj);
};