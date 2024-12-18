#include <bits/stdc++.h>
using namespace std;
// Подниска

int main () {
    string igla, plast;
    cin >> plast >> igla;
    
    //int poz =...
    size_t poz = plast.find(igla);
    // ako postoji indeks, ako ne -1
    if ( poz != string::npos ) // postoji!
        cout << poz;
    else
        cout << -1;
    
    return 0; }