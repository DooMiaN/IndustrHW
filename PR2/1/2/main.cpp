#include <iostream>
#include "circle.h"

using namespace std;

int main()
{

	//������� 0 0 1 \ 1 1 2.5 \ 1 1 1, ����� ��������� ������ �������
	setlocale(LC_ALL, "Rus");
	float x, y, r;
	circle mas[3];
	for (int i = 0; i < 3; i++) {

		cout << "������� �, �, radius ��� ���������� #" << i << "����� ������: " << endl;
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