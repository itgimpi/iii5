#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// The integer n is composite if and only if there exists an integer a such that a | n and 1 < a < n.
// O(n), sporo...
bool isprime(ull n) {
    if ( n == 1 ) return false; // 1 nije nije prost
    for ( ull i = 2; i < n; i++ ) // ako za brojeve od 2 do n-1 postoji deljivost
        if ( n % i == 0 )
            return false; // broj nije prost
    return true; } // ako nije prost, onda je slozen

int main () {
    ull n; cin >> n;

    if (isprime(n)) cout << "prost";
    else cout << "nije";
    
    return 0; }