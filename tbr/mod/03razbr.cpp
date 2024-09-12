#include <bits/stdc++.h>
using namespace std;
// Разбрајалица
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/razbrajalica
/* напиши програм који приказује редни број детета које је одабрано да жмури 
(тј. на коме се разбрајање завршава). */
// O(1)

int main () {
    int brsl, n, rb; cin >> brsl >> n >> rb;

    cout << ( brsl + rb - 1 ) % n;
    
    return 0; }