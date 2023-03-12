#pragma once
class eq2
{
private:
    double a, b, c;
    double D;
public:
    eq2(double a1, double b1, double c1);
    void set(double a1, double b1, double c1);
    double find_X();
    double find_Y(double x1);
    eq2 operator + (eq2 next) {
        return eq2(this->a + next.a, this->b + next.b, this->c + next.c);
    };

};