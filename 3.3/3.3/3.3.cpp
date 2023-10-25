#include <iostream>
using namespace std;
int main() {
	{
		setlocale(0, "");
		const int a = 10;
		long long b = 1;
		for (int i = 1; i <= a; i++)
			b = b * (i * (i + 1)) / 2;
		cout <<"Получилось число: "<< b << endl;
		
	}
	return 0;
}
