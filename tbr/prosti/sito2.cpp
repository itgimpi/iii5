#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// broj prostih od a do b
// bez sita
bool isprime(ull n) {
    if ( n == 1 ) return false;
    if ( n == 2 || n == 3) return true;
    if ( n % 2 == 0 ) return false;
    if ( n % 3 == 0 ) return false;

    ull koren = (ull) sqrt(n); // samo 1 korenovanje umesto sqrt mnozenja

    for ( ull i = 5; i <= koren; i+=2 )
        if ( n % i == 0 )
            return false;
    return true; }

int main () {
    ull a, b; cin >> a >> b;

    ull broj = 0, zbir = 0;
    for (int i = a; i <= b; i++)
        if (isprime(i)) {
            broj++;
            zbir += i;
        }
    
    cout << broj << '\n' << zbir; 
    return 0; }