#pragma once
#include "ocean.h"
using namespace std;
class sea : public ocean {
protected:
	string seaname;
	int seadepth, seaarea, cline;
public:
	sea();
	sea(string n, string sn);
	sea(string oc, string n, int d, int s, int l);
	friend ostream& operator<< (ostream& stream, sea o);
	friend istream& operator>> (istream& stream, sea& o);
};