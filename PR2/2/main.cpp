// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	float x, y, r;
	circle mas[3];
	for (int i = 0; i < 3; i++) {

		cout << "Put your x, y and radius for your circle #" << i + 1 << ": " << endl;
		cin >> x >> y >> r;
		mas[i].set_circle(r, x, y);

	}
	for (int i = 0; i < 3; i++) {

		cout << "Square for circle #" << i + 1 << " is: " << endl;
		cout << mas[i].square() << endl;

		cout << "Is circle #" << i + 1 << "possible to do triangle_in with 3, 4, 5 matches?" << endl;
		cout << (mas[i].triangle_in(3, 4, 5) ? "Y" : "N") << endl;

		cout << "Is circle #" << i + 1 << "possible to do triangle_in with 5, 12, 13?" << endl;
		cout << (mas[i].triangle_around(5, 12, 13) ? "Y" : "N") << endl;

		cout << "Is circle #" << i + 1 << "collapsing with circle 4, 1, 3?" << endl;
		cout << (mas[i].check_circle(4, 1, 3) ? "Y" : "N") << endl;

	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
