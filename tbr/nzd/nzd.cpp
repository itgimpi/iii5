#include <bits/stdc++.h>
using namespace std;
// NZD

int nzd( int a, int b ) { // rek.
    if ( b == 0 ) return a;
    return nzd( b, a % b ); }

int nzd2( int a, int b ) { // ite.
    while ( b != 0 ) {
        int tmp = a % b;
        a = b;
        b = tmp;    }
    return a; }

int main () {
    int a, b; cin >> a >> b;

    cout << nzd(a, b) << '\n';
    cout << nzd2(a, b) << '\n';
    cout << __gcd(a, b) << '\n';
    
    return 0; }