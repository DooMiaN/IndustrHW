#include "bay.h"

ocean::ocean() {
	name = location = "Empty";
	depth = area = 0;
}

ocean::ocean(string oc) {
	name = oc;
	location = "Empty ocean";
	depth = area = 0;
}

ocean::ocean(string n, string l, int d, int s) {
	name = n;
	location = l;
	depth = d;
	area = s;
}

ostream& operator<< (ostream& stream, ocean o) {
	stream << "Ocean: " << o.name << "\nLocation: " << o.location << "\nDepth " << o.depth << "\nArea " << o.area << endl << endl;
	return stream;
}

istream& operator>> (istream& stream, ocean& o) {
	stream >> o.name >> o.location >> o.depth >> o.area;
	return stream;
}

sea::sea() : ocean() {
	seaname = "Empty sea";
	seadepth = seaarea = cline = 0;
}

sea::sea(string n, string sn) : ocean(n) {
	seaname = sn;
	seadepth = seaarea = cline = 0;
}

sea::sea(string oc, string n, int d, int s, int l) : ocean(oc) {
	seaname = n;
	seadepth = d;
	seaarea = s;
	cline = l;
}

istream& operator>> (istream& stream, sea& s) {
	stream >> s.name >> s.seaname >> s.seadepth >> s.seaarea >> s.cline;
	return stream;
}

ostream& operator<< (ostream& stream, sea s) {
	stream << "Ocean: " << s.name << "\nSea: " << s.seaname << "\nDepth: " << s.seadepth << "\nArea: " << s.seaarea << "\nCoastline: " << s.cline << endl << endl;
	return stream;
}

bay::bay() : sea() {
	bayname = "Empty bay";
	length = height = 0;
}

bay::bay(string n, string sn, string bn, int l, int h) : sea(n, sn) {
	bayname = bn;
	length = l;
	height = h;
}

istream& operator>> (istream& stream, bay& s) {
	stream >> s.name >> s.seaname >> s.bayname >> s.length >> s.height;
	return stream;
}

ostream& operator<< (ostream& stream, bay s) {
	stream << "Ocean: " << s.name << "\nSea: " << s.seaname << "\nBay: " << s.bayname << "\nLength: " << s.length << "\nHeight: " << s.height << endl << endl;
	return stream;
}