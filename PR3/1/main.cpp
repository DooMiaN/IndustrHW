#include <iostream>
#include "eq2.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c;
    cin >> a >> b >> c;
    eq2 exmpl1(a, b, c);
    exmpl1.find_X();
    cout << exmpl1.find_Y(6) << endl;

    cin >> a >> b >> c;
    eq2 exmpl2(a, b, c);
    exmpl2.find_X();
    cout << exmpl2.find_Y(6) << endl;

    eq2 exmpl3 = exmpl1 + exmpl2;
    exmpl3.find_X();
    cout << exmpl3.find_Y(6) << endl;
    return 0;
}
