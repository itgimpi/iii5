#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// The integer n is composite if and only if there exists an integer a such that a | n and 1 < a < n.
// O(sqrt n)
bool isprime(ull n) {
    if ( n == 1 ) return false;
    if ( n == 2 || n == 3) return true;
    if ( n % 2 == 0 ) return false;
    if ( n % 3 == 0 ) return false;
    for ( ull i = 5; i * i <= n; i+=2 ) // jos brze
        if ( n % i == 0 )
            return false;
    return true; }

int main () {
    ull n; cin >> n;

    if (isprime(n)) cout << "prost";
    else cout << "nije";
    
    return 0; }