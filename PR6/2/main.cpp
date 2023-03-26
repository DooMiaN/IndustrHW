#include "trunccone.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	
	trunccone* arr = new trunccone[3];
	
	for (int i = 0; i < 3; i++) {
		cout << "Введите координаты центра основания, радиус нижнего и верхних оснований и высоту " << i + 1 << " усечённого конуса: " << endl;
		cin >> arr[i];
		cout << arr[i];
		cout << "Объём: " << arr[i].volume() << endl;
		cout << "Площадь поверхности: " << arr[i].area() << endl;
	}
}

