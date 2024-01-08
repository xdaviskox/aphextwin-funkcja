#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void stworz(int size, int x, int y) {
    int liczby[size];
    srand(time(0));

    for (int i = 0; i < size; ++i) {
        liczby[i] = rand() % x + y;
    }

    cout << "Utworzona tablica: ";
    for (int i = 0; i < size; ++i) {
        cout << liczby[i] << " ";
    }
}

int main() {
    const int size = 10;
    int x, y;

    cout << "Podaj liczbe x: ";
    cin >> x;

    cout << "Podaj liczbe y: ";
    cin >> y;

    stworz(size, x, y);

    return 0;
}