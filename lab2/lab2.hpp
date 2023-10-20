#include <cmath>
#include <iostream>

#include "../lab1/lab1.hpp"

using namespace std;
typedef long long ll;

bool isPrime(ll p);
ll genPrime();

struct keys {
    ll c;
    ll d;
};
keys genKey(ll prime);

ll gcd(ll x, ll y);

void shamirCore(ll m);

string binary(ll number);
ll modPow(ll a, ll x, ll p);