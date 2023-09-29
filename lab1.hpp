#include <cmath>
#include <iostream>
using namespace std;

typedef long long ll;

// Часть 1
string binary(ll number);
ll modPow(ll a, ll x, ll p);

// Часть 2
struct nod {
    ll a;
    ll b;
    ll c;
};
nod data(ll a, ll b, ll c);
ll gcd(ll x, ll y);
nod euclid(ll x, ll y);

// Часть 3
bool miillerTest(ll n, ll d);
bool isPrime(ll n, ll k);
ll g_mod_P(ll P, ll Q);
ll DifHell();