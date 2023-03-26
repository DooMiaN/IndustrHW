#pragma once
#pragma once
#include <iostream>
using namespace std;
class Cone {
protected:
    double x, y, z;        // ���������� ����������
    double radius;         // ������
    double height;         // ������
public:
    // ����������� �� ���������
    Cone();

    // ����������� � ������� � ������ ���������
    Cone(double r, double h);
    // ����������� ��� Cone
    Cone(double a, double b, double c, double r, double h);

    // ������� �������
    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();

    // ������� ������ �����������
    double area();
    // �����
    double volume();

    // ���������� ��������� ������
    friend ostream& operator<< (ostream& stream, Cone obj);
};