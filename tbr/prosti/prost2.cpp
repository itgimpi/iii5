#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// If n is a composite integer, then n has a prime divisor less than or equal to √n.
// O(sqrt n)
bool isprime(ull n) {
    if ( n == 1 ) return false;
    for ( ull i = 2; i * i <= n; i++ ) // sqrt n
        if ( n % i == 0 ) // do 40.000 deljenja
            return false;
    return true; }

int main () {
    ull n; cin >> n;

    if (isprime(n)) cout << "prost";
    else cout << "nije";
    
    return 0; }