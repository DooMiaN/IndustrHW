#include <iostream>
#include "triangle.h"
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    cout << "Ïðèâåò!" << endl;
    triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        cout << "Ââåäèòå a, b è c äëÿ òðåóãîëüíèêà ¹" << i + 1 << " ÷åðåç ïðîáåë: " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            mas[i].show();
            cout << "Òðåóãîëüíèêà ñ òàêèìè ñòîðîíàìè íå ñóùåñòâóåò, ïîïðîáóéòå åù¸ ðàç" << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        cout << "Ïåðèìåòð òðåóãîëüíèêà: " << mas[i].perimetr() << endl;
        cout << "Ïëîùàäü òðåóãîëüíèêà: " << mas[i].square() << endl;
    }
    return 0;
}
