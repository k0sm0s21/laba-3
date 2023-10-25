#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int number;
	int count = 0;
	int sum = 0;

	cout << "Введите числа (0 для выхода):" << endl;
	while (true) {
		cin >> number;

		if (number == 0) {
			break;
		}

		count++;
		sum += number;
	}

	if (count > 0) {
		double average = static_cast<double>(sum) / count;
		cout << "Количество чисел: " << count << endl;
		cout << "Сумма чисел: " << sum << endl;
		cout << "Среднее арифметическое: " << average << endl;
	}
	else {
		cout << "Ни одно число не было введено!" << endl;
	}

	return 0;
}