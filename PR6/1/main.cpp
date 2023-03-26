#include <iostream>
#include "Cone.h"
#include <Windows.h>

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    
    Cone* arr = new Cone[3];
    for (int i = 0; i < 3; i++) {
        cout << "Конус " << i+1 << endl;

        int x, y, z;
        cout << "Введите координаты: " << endl;
        cin >> x >> y >> z;
        arr[i].setCoordinate(x,y,z);

        cout << "Введите радиус: " << endl;
        double r;
        cin >> r;
        arr[i].setRadius(r);

        cout << "Введите высоту: " << endl;
        double h;
        cin >> h;
        arr[i].setHeight(h);

        cout << arr[i];
        cout << "Объём: " << arr[i].volume() << endl;
        cout << "Площадь поверхности: " << arr[i].area() << endl;
    }
    return 0;
}

