#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	int nomer;
	cout << "Выберите меру длины для перевода \n1. Сажни в метры\n2. Дюймы в сантиметры\n3. Футы в метры \n4. Драхм в граммы \n5. Унций в граммы \n6. Фунты в килограмы \n7. Аршины в метры \n8. Золотники в граммы \n9. Дюймы в милиметры \nВвод: ";
	cin >> nomer;
	switch (nomer) {
	case 1:
		cout << "Введите число для перевода в метры: ";
		cin >> nomer;
		cout << nomer * 2.1366 << " м";
	case 2:
		cout << "Введите число для перевода в сантиметры: ";
		cin >> nomer;
		cout << nomer * 2.5 << " см";
	case 3:
		cout << "Введите число для перевода в метры: ";
		cin >> nomer;
		cout << nomer * 0.3048 << " м";
	case 4:
		cout << "Введите число для перевода в граммы: ";
		cin >> nomer;
		cout << nomer * 3.7325 << " г";
	case 5:
		cout << "Введите число для перевода в граммы: ";
		cin >> nomer;
		cout << nomer * 29.86 << " г";
	case 6:
		cout << "Введите число для перевода в килограммы: ";
		cin >> nomer;
		cout << nomer * 0.40951 << " г";
	case 7:
		cout << "Введите число для перевода в метры: ";
		cin >> nomer;
		cout << nomer * 0.7112 << " м";
	case 8:
		cout << "Введите число для перевода в граммы: ";
		cin >> nomer;
		cout << nomer * 4.2657 << " г";
	case 9:
		cout << "Введите число для перевода в милиметры: ";
		cin >> nomer;
		cout << nomer * 25.3995 << " мм";
	}

	return 0;
}


