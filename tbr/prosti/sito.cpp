#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// broj prostih do n
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
    ull n; cin >> n;

    ull broj = 0, zbir = 0;
    for (int i = 2; i <= n; i++)
        if (isprime(i)) {
            broj++;
            zbir += i;
        }
    
    cout << broj << '\n' << zbir; 
    return 0; }