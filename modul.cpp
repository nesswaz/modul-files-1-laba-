
#include "laura.h"
#include <iostream>
#include <cmath>
using namespace std;
bool IsPowerN(int k, int n) {
    if (k < 1 || n < 2) { return 0; }
    if (k == 1) { return 1; }
    int power = 1;
    while (power < k) {
        power = power * n;
        if (power == k) { return 1; }
        if (power > k || power < 0) { break; }
    }
    return 0;
}

void Proc27() {
    cout << "1) Задача - Proc27" << endl;
    int n;
    cout << "Введите n (>1):" << endl;
    cin >> n;
    int cnt = 0;
    int k;
    cout << "Введите 10 целых положительных чисел: " <<endl;
    for (int i = 0; i < 10; i++) {
        cin >> k;
        if (IsPowerN(k, n)) {
            cout << "true" << endl;
            cnt++;
        }
        else {
            cout << "false" << endl;
        }
    }
    cout << "Количество степеней числа - " << n << " в наборе = " << cnt << endl;
}

//------------------------------------------------------------------------------------


void sortdec3(double a, double b, double c){
    double t = 0;
    if (a < b) {
        t = a;
        a = b;
        b = t;
    }
    if (a < c) {
        t = a;
        a = c;
        c = t;
    }
    if (b < c) {
        t = b;
        b = c;
        c = t;
    }
    cout << a << " "<< b << " " << c << endl;
}

void Proc13() {
    cout << "2) Задача - Proc13" << endl;
    float a1, b1, c1, a2, b2, c2;
    cout << "Введите числа a1, b1, c1 - " << endl;
    cin >> a1 >> b1 >> c1;
    sortdec3(a1, b1, c1);
    cout << "Введите числа a2, b2, c2 - " << endl;
    cin >> a2 >> b2 >> c2;
    sortdec3(a2, b2, c2);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

double Ln(double x, double e) {
    if (fabs(x) >= 1 || e <= 0) {
        cout << "Ошибка: введены неверные значения" << endl;
        return 0;
    }
    double result = x;
    double a = x;
    double i = 1;
    while (fabs(a) > e) {
       
        i = i + 1;
        a = -a * x * (i-1) / i;
        result += a;
    }
    return result;
}

void Proc43() {
    cout << "3) Задача - Proc43 " << endl;
    double x;
    cout << "Введите х, |x|<1 " << endl;
    cin >> x;
    cout << "Введите 6 значений эпсилон (е>0)" << endl;
    double e1, e2, e3, e4, e5, e6;
    cin >> e1 >> e2 >> e3 >> e4 >> e5 >> e6;    
    double log1 = log(1 + x);
    cout << "Точное значение = " << log1 << endl;
    cout << "Результат 1й функции: " << Ln(x,e1) << endl;
    cout << "Результат 2й функции: " << Ln(x,e2) << endl;
    cout << "Результат 3й функции: " << Ln(x,e3) << endl;
    cout << "Результат 4й функции: " << Ln(x,e4) << endl;
    cout << "Результат 5й функции: " << Ln(x,e5) << endl;
    cout << "Результат 6й функции: " << Ln(x,e6) << endl;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int desyat(int num, double p) {
    int res = 0;
    double i = 0;
    if (p < 2 || p > 10) {
        cout << "Вы ввели неправильно СС." << endl;
    }
    else {
        while (num > 0) {
            res = res + (num % 10) * pow(p,i);
            i++;
            num = num/10;
        }
    }
    return res;
}

void TheTri13() {
    cout << "4) Задача - TheTri13" << endl;
    int x, p;
    cout << "Введите систему счисления этого числа Р [2-9] " << endl;
    cin >> p;
    cout << "Введите число, которое нужно перевести в 10 систему счисления " << endl;
    cin >> x;
    cout << "Число "<< x << " в 10СС - " << desyat(x,p) << endl;
}


//--------------------------------------------------------------------

int Reccur12(int number) {
    if (number == 1){
        return 2;
    }
    else {
        return number * (number + 1) + Reccur12(number - 1);
    }
}

void Reccur12z() {
    cout << "5) Задача - Reccur12 " << endl;
    int n, s = 0;
    cout << "Введите N - кол-во первых членов последовательности:" << endl;
    cin >> n;
    if (n < 1 || n > 20) {
        cout << "Ошибка, введите другое значение N." << endl;
        n = 1;
        //return 1;
    }
    cout << "Сумма = " << Reccur12(n) << endl;
}

//endendendendendendendendendendendendendendendendendendendendendendendendendendendendendendendendendendend