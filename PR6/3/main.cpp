#include "bay.h"
//#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	ocean okean;
	cout << "Введите данные об океане (название, расположение, глубину, площадь): " << endl;
	cin >> okean;

	cout << "Введите данные о море (название океана, название моря, глубину, площадь, длину береговой линии): " << endl;
	sea more;
	cin >> more;
	
	bay zaliv;
	cout << "Введите данные о заливе (океан, море, название залива, его протяженность и высоту): " << endl;
	cin >> zaliv;

	cout << okean;
	cout << more;
	cout << zaliv;

	ocean neokean;
	sea nemore;
	bay nezaliv;

	cout << neokean << nemore << nezaliv;

	ocean semiokean("turezkiy shashlichniy okeanishe");
	sea semimore("korean okean","sabakin oaziz");
	bay semizaliv("russianen oceane desu", "animechnoe more desu", "zaliv-san", 1945, 608);

	cout << semiokean << semimore << semizaliv;
}
