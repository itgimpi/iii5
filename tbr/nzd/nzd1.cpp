#include <bits/stdc++.h>
using namespace std;
// NZD

int nzd1( int a, int b ) {
    if ( b == 0 ) return a;
    return nzd1( b, a % b); }

int nzd2( int a, int b ) {
    while(  b != 0 ) {
        int tmp = a % b;
        a = b;
        b = tmp;  } 
    return a;}

int main () {
    int a, b; cin >> a >> b;

    cout << nzd1(a, b) << endl;
    cout << nzd2(a, b) << endl;
    cout << __gcd(a, b) << endl;


    
    return 0; }