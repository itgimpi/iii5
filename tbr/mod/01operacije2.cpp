#include <bits/stdc++.h>
using namespace std;
// Операције по модулу
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/operacije_po_modulu
/* Напиши програм који одређује последње три цифре збира
 и последње три цифре производа 4 унета цела броја. */


int main () {
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << ((a + b) % 1000 + (c + d) % 1000) % 1000 << '\n';
    cout << ((a * b) % 1000 * (c * d) % 1000) % 1000 << '\n';

    
    return 0; }