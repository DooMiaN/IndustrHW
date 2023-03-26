#pragma once
#include "sea.h"
using namespace std;
class bay : public sea {
	string bayname;
	int length, height;
public:
	bay();
	bay(string name, string sn, string bn, int l, int h);
	friend ostream& operator<< (ostream& stream, bay s);
	friend istream& operator>> (istream& stream, bay& s);
};