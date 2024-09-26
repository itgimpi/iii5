#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// broj prostih od a do b, zadnjih 6 cifara
// SITO

void sito(vector<bool>&prost, int n){
    prost.resize(n, true);
    prost[0] = prost[1] = false; // 1 nije prost
    for (int i = 2; i * i <= n; i++)
        if ( prost[i] ) 
            for ( int j = i * i; j <= n; j += i )
                prost[j] = false;

}


int main () {
    int a, b; cin >> a >> b;
    vector<bool>prost;
    sito(prost, b);

    int broj = 0, zbir = 0;
    for (int i = a; i <= b; i++)
        if (prost[i]) {
            broj++;
            zbir = (zbir + i) % 1000000;
        }
    
    cout << broj << '\n' << zbir; 
    return 0; }