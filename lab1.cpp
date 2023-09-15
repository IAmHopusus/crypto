#include "lab1.hpp"

int main() {
    long long int a = 5966666548, x = 343434345, p = 89;
    string x1 = binary(x);
    cout << modPow(a, x1, p);
}

string binary(long long number) {
    string x1 = number == 0 ? to_string(number) : "";
    while (number > 0) {
        int num_tmp = number % 2;
        x1 = x1 + to_string(num_tmp);
        number /= 2;
    }
    return x1;
}

long long modPow(long long a, string x, long long p) {
    int t = x.size();
    cout << x << endl;
    long long y = 1;
    for (int i = 0; i < t; i++) {
        if (x[i] == '1') y = (y * a) % p;
        a = (a * a) % p;
    }
    return y;
}
