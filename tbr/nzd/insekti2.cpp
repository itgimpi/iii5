#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/euklid

int main () {
    int a, b, c; cin >> a >> b >> c;
    //int res1 = __gcd(a, b); // nzd prva 2 broja
    //int res2 = __gcd( res1, c ); // nzd sva 3 broja
    //cout << res2;

    cout << __gcd( __gcd(a, b), c );

    
    return 0; }