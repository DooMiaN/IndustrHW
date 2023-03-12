#include "rational.h"
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    a %= b;
    return gcd(b, a);
};

rational::rational() {
    a = 0;
    b = 1;
};

rational::rational(int a1, int _b) {
    if (_b == 0) { cout << "Preventing the universe to collapse: dont do ever make the denomirator EQUAL TO 0"; exit(0); }
    int d = gcd(a1, _b);
    a = a1 / d;
    b = _b / d;
};

void rational::set(int _a, int _b) {
    if (_b == 0) { 
        cout << "Preventing the universe to collapse: dont do ever make the denomirator EQUAL TO 0"; 
        exit(0); 
    }
    int d = gcd(_a, _b);
    a = _a / d;
    b = _b / d;
};

void rational::show() {
    cout << a << "/" << b << endl;
};

rational operator-(const rational& ratio1, const rational& ratio2) {
    return rational((ratio1.a * ratio2.b - ratio2.a * ratio1.b), ratio1.b * ratio2.b);
};

void rational::operator++() {
    this->set(this->a + 1, this->b);
};

bool rational::operator==(const rational& next) {
    if (this->a == next.a && this->b == next.b) return true;
    return false;
};

bool rational::operator>(const rational& next) {
    if ((this->a * next.b) > (next.a * this->b)) return true;
    return false;
};

void rational::operator=(const rational& next) {
    this->a = next.a;
    this->b = next.b;
};