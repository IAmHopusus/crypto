#include "lab2.hpp"

int main() {
    srand(time(NULL));
    ll p = genPrime();
    shamirCore(p);
    return 0;
}