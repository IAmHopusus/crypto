#include "lab2.hpp"

string binary(ll number) {
    string x1 = number == 0 ? to_string(number) : "";
    while (number > 0) {
        int num_tmp = number % 2;
        x1 = x1 + to_string(num_tmp);
        number /= 2;
    }
    return x1;
}

ll modPow(ll a, ll x, ll p) {
    string x1 = binary(x);
    int t = x1.size();
    ll y = 1;
    for (int i = 0; i < t; i++) {
        if (x1[i] == '1') y = (y * a) % p;
        a = (a * a) % p;
    }
    return y;
}
