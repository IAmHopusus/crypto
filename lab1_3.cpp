#include "lab1.hpp"

bool miillerTest(ll n, ll d) {
    ll a = 2 + rand() % (n - 4);
    ll x = modPow(a, d, n);
    if (x == 1 || x == n - 1) return true;
    while (d != n - 1) {
        x = (x * x) % n;
        d *= 2;
        if (x == 1) return false;
        if (x == n - 1) return true;
    }
    return false;
}

bool isPrime(ll n, ll k) {  // n - число для проверки, k - точность
    if (n <= 1 || n == 4) return false;
    if (n <= 3) return true;
    ll d = n - 1;
    while (d % 2 == 0) d /= 2;
    for (ll i = 0; i < k; i++)
        if (!miillerTest(n, d)) return false;
    return true;
}

ll g_mod_P(ll P, ll Q) {
    ll g = 0;
    do {
        g = rand();
    } while (modPow(g, Q, P) == 1);
    return g;
}

ll DifHell() {
    ll P = 0, g = 0, Q = 0;
    do {
        Q = rand();
        P = 2 * Q + 1;
    } while (!(isPrime(Q, log2(Q)) && isPrime(P, log2(P))));
    g = g_mod_P(P, Q);
    cout << "|Q = " << Q << "\n|P = " << P << "\n|g = " << g << endl;
    ll Xa = 1 + rand() % (P - 1);
    ll Xb = 1 + rand() % (P - 1);
    ll Ya = modPow(g, Xa, P);
    ll Yb = modPow(g, Xb, P);
    ll Zab = modPow(Yb, Xa, P);
    ll Zba = modPow(Ya, Xb, P);
    cout << "|Xa = " << Xa << "\n|Xb = " << Xb << "\n|Ya = " << Ya << "\n|Yb = " << Yb << "\n|Zab = " << Zab
         << "\n|Zba = " << Zba << endl;
    return Zab;
}