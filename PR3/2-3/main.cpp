#include "rational.h"
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rationals: ";
    cin >> n;
    rational* arr = new rational[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Input numerator and denominator for # " << i + 1 << endl;
        int a, b;
        cin >> a >> b;
        rational obj = rational(a, b);
        arr[i] = obj;
    };
    for (int i = 0; i < n - 1; i++)
    {
        rational obj;
        cout << endl << endl;

        cout << "(==): " << i + 1 << " and " << i + 2 << ": " << endl;
        bool k = arr[i] == arr[i + 1];
        cout << k << endl;

        cout << "(>): " << i + 1 << " and " << i + 2 << ": " << endl;
        k = arr[i] > arr[i + 1];
        cout << k << endl;

        cout << "(+): " << i + 1 << " and " << i + 2 << ": " << endl;
        obj = arr[i] + arr[i + 1];
        obj.show();

        cout << "(-): " << i + 1 << " and " << i + 2 << ": " << endl;
        obj = arr[i] - arr[i + 1];
        obj.show();

        cout << "(++): " << i + 1 << ": " << endl;
        ++arr[i];
        obj = arr[i];
        obj.show();
    };
    delete[] arr;
    return 0;
};