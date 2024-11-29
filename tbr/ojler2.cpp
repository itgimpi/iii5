#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// euler's function phi, 

int phi(int n) {
    
    int fi = n; // fi = n * ....
    int p = 2; // potencijalni prosti delioci

    while ( p * p <= n ) { // O(sqrt n)
        if ( n % p == 0 ) { // deljivo sa prostim del.?
            //fi = fi * ( p - 1 ) / p PREKORACENJE!!!
            fi = ( fi / p ) * (p - 1);
            // ima vise p-ova
            while ( n % p == 0 )
                n/= p; }
        //novi kandidat za prostog cinioca
        p++; }
    if ( n > 1 ) fi = ( fi / n ) * ( n - 1 );
    return fi; }

int main () {
    int n; cin >> n;
    cout << phi(n);
    
    return 0; }