#include <iostream>
#include <cmath>
#include "laura.h"
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;
int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    #endif
    int choese;
    cout << "Выберите от 1-6: " << endl;
    cout << "1) Задача - Proc27" << endl;
    cout << "2) Задача - Proc13" << endl;
    cout << "3) Задача - Proc43 " << endl;
    cout << "4) Задача - TheTri13" << endl;
    cout << "5) Задача - Reccur12 " << endl;
    cout << "6) Выход из программы " << endl;
    cin >> choese;
    switch (choese) {
        case 1: {
            Proc27(); //вводить в столбик числа
            break;
        }
        case 2: {
            Proc13(); //вводить с трочку через пробел
            break;
        }
        case 3: {
            Proc43(); 
            break;
        }
        case 4: {
            TheTri13();
            break;
        }
        case 5: {
            Reccur12z();
            break;
        }
        case 6: {
            cout << "Выход из программы" << endl;
            break;
        }
      
    }
}
//./program.exe
//g++ osn.cpp modul.cpp -o program.exe