#include <iostream>
#include "figure.h"

using namespace std;

int main() {
    float x1, x2, x3, x4, y1, y2, y3, y4;
    for (int i = 0; i < 3; i++) {
        cout << "Input x1, x2, x3, x4, y1, y2, y3, y4 for figure #" << i + 1 << ": " << endl;
        cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
        figure figuretest = figure(x1, x2, x3, x4, y1, y2, y3, y4);
        figuretest.show();
    };
    return 0;
};
