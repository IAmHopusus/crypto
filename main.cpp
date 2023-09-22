#include "lab1.hpp"

int main() {
    ll a = 5966666548, x = 343434345, p = 120;
    string x1 = binary(x);
    cout << modPow(a, x1, p) << endl;

    ll a1 = 99799999, b = 10000;
    nod E = NOD(a1, b);
    cout << endl << E.a << " " << E.b << " " << E.c << endl;
    if (a1 * E.b + b * E.c == 1) cout << "Все збс\n";

    return 0;
}