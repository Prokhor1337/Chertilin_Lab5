#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    int arr[10][10];

    
    cout << "Завичайна матриця:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            arr[i][j] = 0; 
        }
    }

    cout << "Верхня трикутна матриця:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
