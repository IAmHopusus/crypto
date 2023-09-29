#include <tuple>

#include "lab1.hpp"

nod data(ll a, ll b, ll c) {
    nod N;
    N.a = a;
    N.b = b;
    N.c = c;
    return N;
}

ll gcd(ll x, ll y) {
    while (y) {
        ll r = x % y;
        x = y;
        y = r;
    }
    return x;
}

nod euclid(ll x, ll y) {
    ll i = 0;
    nod U = data(x, 1, 0);
    nod V = data(y, 0, 1);
    while (V.a) {
        ll q = U.a / V.a;
        nod T = data(U.a % V.a, U.b - q * V.b, U.c - q * V.c);
        U = V;
        V = T;
    }
    return U;
}
