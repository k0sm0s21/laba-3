#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int let;
	float proc, i, summ;
	cout << "Сумма вклада: ";
	cin >> summ;
	cout << "На сколько лет: ";
	cin >> let;
	proc = summ * 3 / 100;
	i = summ + proc * let;
	cout << "Сумма через " << let << " лет: " << i << endl;
	system("PAUSE");
	return 0;
}