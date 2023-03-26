#pragma once
#include <string>
#include <iostream>
using namespace std;
class ocean {
protected:
	string name, location;
	int depth, area;
public:
	ocean();
	ocean(string oc);
	ocean(string n, string l, int d, int a);
	friend ostream& operator<< (ostream& stream, ocean o);
	friend istream& operator>> (istream& stream, ocean& o);
};