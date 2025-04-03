#include <bits/stdc++.h>
using namespace std;
// Матрица повезаности
// Staticki C niz, matrica

int main () {
    ios_base::sync_with_stdio(false);
    int n, e; cin >> n >> e;
    bool veze[1010][1010];

    for (int i = 0; i < e; i++) {
        int u, v; cin >> u >> v; 
        veze[u][v] = true;
    }
    int q; cin >> q;
    int res = 0;
    
    while (q--) {
        int u, v; cin >> u >> v;
        if (veze[u][v]) res++;
    }
    cout << res;
    return 0; }