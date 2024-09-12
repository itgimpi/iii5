#include <bits/stdc++.h>
using namespace std;
// Збир бројева по модулу
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/zbir_brojeva_po_modulu
/*Напиши програм који израчунава збир природних бројева од 1 до n по датом модулу m. */
typedef unsigned long long ull;
// O(1) zbir = n ( n + 1 ) / 2 
int main () {
    ull n, m; cin >> n >> m;
    ull res;
    //res = ( n * (n+1) / 2 ) % m;

    if ( n % 2 == 0 )
        res = ( (n/2) % m * (n+1) % m ) % m;
        
    else 
        res = ( n % m * ((n+1)/2) % m ) % m;

    cout << res;
    
    return 0; }