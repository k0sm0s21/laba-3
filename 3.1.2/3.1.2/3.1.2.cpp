#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int negative_index = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            negative_index = i;
            break;
        }
    }
    for (int i = 0; i < negative_index; i++) {
        cout << a[i] << " ";
    }
    for (int i = negative_index; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}