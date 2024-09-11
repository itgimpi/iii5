#include <bits/stdc++.h>
using namespace std;
// Монопол
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/monopol
/* Ако се зна број поља које је први играч прешао од почетка игре
 и број поља које је други играч прешао од почетка игре
  напиши програм који израчунава колико корака први играч треба да направи
   да би дошао на поље на ком се налази други играч. */


int main () {
    int m, a, b; cin >> m >> a >> b;
    // a i b su rez. bacanja kocke ~ 12345
    int aa = a % m; int bb = b % m;
    // aa i bb su pozicuje ~ od 0 do m-1

    
    cout << (bb - aa + m) % m;
    
    return 0; }