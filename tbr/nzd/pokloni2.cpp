#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/pokloni_u_prodavnici
typedef unsigned long long ull;

ull nzd ( ull a, ull b ) { return __gcd(a,b); }
ull nzs ( ull a, ull b ) { return a / nzd(a,b) * b; }

int main () {
    ull i, j, k; cin >> i >> j >> k;
    ull kraj = nzs( nzs(i,j), k );
    //cout << kraj;
    ull pare = 0;
    pare += ( kraj / i ) * 200;
    pare += ( kraj / j ) * 500;
    pare += ( kraj / k ) * 1000;

    cout << pare;    
    return 0; }