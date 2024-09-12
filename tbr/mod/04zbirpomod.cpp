#include <bits/stdc++.h>
using namespace std;
// Збир бројева по модулу
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/zbir_brojeva_po_modulu
/*Напиши програм који израчунава збир природних бројева од 1 до n по датом модулу m. */
typedef unsigned long long ull;
// O(n) - 50%
int main () {
    ull n, m; cin >> n >> m;
    ull res = 0;
    for ( ull i = 1; i <= n; i++ )
        //res += i; DOLAZI DO PREK.
        res = (res + i % m) % m;

    cout << res;
    
    return 0; }