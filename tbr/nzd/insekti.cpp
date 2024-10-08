#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/euklid

int main () {
    int a, b, c; cin >> a >> b >> c;

    //int nzd1 = __gcd(a, b);
    //int nzd2 = __gcd(nzd1, c);

    //cout << nzd2;
    cout << __gcd( __gcd(a, b), c );
    
    return 0; }