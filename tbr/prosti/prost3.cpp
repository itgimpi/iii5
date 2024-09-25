#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// 
// O(sqrt n)
bool isprime(ull n) {
    if ( n == 1 ) return false;
    if ( n == 2 ) return true;
    if ( n % 2 == 0 ) return false;
    for ( ull i = 3; i * i <= n; i += 2 ) // 2x brze
        if ( n % i == 0 )
            return false;
    return true; }

int main () {
    ull n; cin >> n;

    if (isprime(n)) cout << "prost";
    else cout << "nije";
    
    return 0; }