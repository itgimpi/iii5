#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/euklid

ull nzd(ull a, ull b) {
    return __gcd(a, b); }

ull nzs(ull a, ull b) {
    //return a * b / __gcd(a, b); } <- prekoracenje?
    return a / __gcd(a, b) * b; }

int main () {
    ull i, j, k; cin >> i >> j >> k;
    ull nzs1 = nzs(i, j); // za prva 2
    ull nzs2 = nzs(nzs1, k); // za sva 3
    //cout << nzs2;
    ull res = 0;
    res += ( nzs2 / i ) * 200; // 200 dinara
    res += ( nzs2 / j ) * 500; // 500 dinara
    res += ( nzs2 / k ) * 1000; // 200 dinara
 
    cout << res;
    
    return 0; }