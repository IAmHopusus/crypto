#include "lab2.hpp"

bool isPrime(ll p) {
    if (p < 1 || p <= 3 || (p % 2 == 0 || p % 3 == 0)) return false;
    for (int i = 5; i * i <= p; i += 6)
        if (p % i == 0 || p % (i + 2) == 0) return false;
    return true;
}

ll genPrime() {
    ll range = 100000000, x;
    do {
        x = rand() % range;
    } while (isPrime(x) == false);
    return x;
}

keys genKey(ll prime) {
    keys key;
    while (1) {
        key.c = rand() % (prime - 1) + 1;
        if (gcd(key.c, prime - 1) == 1) break;
    }
    key.d = 1;
    while ((key.c * key.d) % (prime - 1) != 1) {
        key.d++;
    }
    return key;
}

ll gcd(ll x, ll y) {
    while (y) {
        ll r = x % y;
        x = y;
        y = r;
    }
    return x;
}

void shamirCore(ll p) {
    // Создадим m в пределах p-1
    ll m = rand() % (p - 1);
    cout << "\nm: " << m << " p: " << p << endl;
    // Генерация для A
    keys A = genKey(p);
    // Генерация для B
    keys B = genKey(p);
    cout << "Ключи А: Ca = " << A.c << ", Da = " << A.d << endl;
    cout << "Ключи B: Cb = " << B.c << ", Db = " << B.d << endl;
    // Выполнение протокола
    ll x1 = modPow(m, A.c, p);
    ll x2 = modPow(x1, B.c, p);
    ll x3 = modPow(x2, A.d, p);
    ll x4 = modPow(x3, B.d, p);
    cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
}