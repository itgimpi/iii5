#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
/* 
Напиши програм који исписује све просте бројеве међу унетима. 
Програм може да погреши у малом броју случајева, али треба да ради брзо.

Улаз
Свака линија стандардног улаза (има их највише 1000) је природан број мањи од 10^15.

Излаз
На стандардни излаз исписати оне унете бројеве који су прости. */

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
    ull x;

    while ( cin >> x)
        if (isprime(x))
            cout << x << '\n';
    
    
    return 0; }