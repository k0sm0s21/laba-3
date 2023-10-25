#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    bool exit = false;
    int razmer;
    char figura, polozhenie, symbol;

    while (exit == false) {
        cout << "Программа: Фигуры\n1. Линия\n2. Треугольник \n3. Прямоугольная трапеция\n0. Выход\nВыбирите фигкру: ";
        cin >> figura;
        if (figura == '1') {
            system("cls");
            cout << "Выберите положение линии\n1. Горизонтальная\n2. Вертикальная\nВвод: ";
            cin >> polozhenie;
            if (polozhenie == '1') {
                system("cls");
                cout << "Введите размер линии: ";
                cin >> razmer;
                system("cls");
                cout << "Введите символ, из которго состоит линия: ";
                cin >> symbol;
                system("cls");
                for (int a = 0; a < razmer; a++) {
                    cout << symbol;
                }
                exit = true;
            }
            else if (polozhenie == '2') {
                system("cls");
                cout << "Введите размер линии: ";
                cin >> razmer;
                system("cls");
                cout << "Введите символ, из которго состоит линия: ";
                cin >> symbol;
                system("cls");
                for (int a = 0; a < razmer; a++) {
                    cout << symbol << "\n";
                }
                exit = true;
            }
            else {
                system("cls");
                continue;
            }
        }
        if (figura == '2') {
            cout << "Введите высоту треугольника: ";
            cin >> razmer;

            for (int i = 0; i < razmer; i++) {
                for (int j = 1; j < razmer - i; j++)
                {
                    cout << " ";
                }
                for (int j = razmer - 2 * i; j <= razmer; j++)
                {
                    cout << "*";
                }
                cout << endl;
        }
        if (figura == '3') {
            int p = 0;
            cout << "Введите размер:";
            cin >> razmer;
            for (int i = razmer - 1; i >= 0; i--) {
                for (int z = 0; z < i; z++) {
                    cout << " ";
                }
                for (int x = 0; x < razmer + p; x++) {
                    cout << "*";
                }
                p += 2;
                cout << endl;

            }
        }

        else if (figura == '0') {
            system("cls");
            exit = true;
            cout << "Вы вышли.";
        }
        else {
            //system("cls");
            continue;
        }
            }
        }
    }
