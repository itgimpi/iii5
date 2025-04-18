#include <bits/stdc++.h>
using namespace std;
// Матрица повезаности
// Vektor C++, matrica, bolje resenje

int main () {
    ios_base::sync_with_stdio(false);

    int n, e; cin >> n >> e;
    vector<vector<bool>>veze(n, // cvorovi su od 1 do n
                        vector<bool>(n, false));

    for (int i = 0; i < e; i++) {
        int u, v; cin >> u >> v; u--; v--; 
        veze[u][v] = true;
    }
    int q; cin >> q;
    int res = 0;
    
    while (q--) {
        int u, v; cin >> u >> v; u--; v--; 
        if (veze[u][v]) res++;
    }
    cout << res;
    return 0; }