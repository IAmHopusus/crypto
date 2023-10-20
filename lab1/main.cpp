#include "lab1.hpp"

int main() {
    srand(time(NULL));

    ll a = rand() % 100000000, x = rand() % 100000000, p = rand() % 100;
    cout << "\tПункт 1\nРандомные значения:\na = " << a;
    cout << "\nx = " << x;
    cout << "\np = " << p;
    cout << "\nПолученное значение: " << modPow(a, x, p) << endl;
    cout << "Сайт для проверки: https://planetcalc.ru/8979/\n";

    cout << "\n\tПункт 2\n";
    ll a1 = rand() % 10000000, b = rand() % 10000000;
    if (b > a1) {
        auto t = a1;
        a1 = b;
        b = t;
    }
    cout << "Рандомные значения:\na = " << a1 << "\nb = " << b << endl;
    nod E = euclid(a1, b);
    cout << "Выход с алгоритма Евклида:"
         << "\nНОД - " << E.a << "; x = " << E.b << "; y = " << E.c << ";\n";
    cout << "Сайт для проверки: https://planetcalc.ru/3298/\n";

    cout << "\n\tПункт 3\n";
    DifHell();

    return 0;
}