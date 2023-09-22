#include <cmath>
#include <iostream>
using namespace std;

typedef long long ll;

struct nod {
    ll a;
    ll b;
    ll c;
};

string binary(ll number);
ll modPow(ll a, string x, ll p);

nod data(ll a, ll b, ll c);
ll gcd(ll x, ll y);
nod NOD(ll x, ll y);