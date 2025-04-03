#include <bits/stdc++.h>
using namespace std;
// Листе повезаности
// vek vek, lista suseda

int main () {
    ios_base::sync_with_stdio(false);

    int n, e; cin >> n >> e;
    vector<vector<int>>veze(n); // lista
    for (int i = 0; i < e; i++) {
        int u, v; cin >> u >> v;
        veze[u].push_back(v); // neusmeren graf
        veze[v].push_back(u);
    }

    for ( int i = 0; i < n; i++ ) {
        // poredjaj susedne cvorove...
        sort(begin(veze[i]), end(veze[i]));
        
        for ( auto s : veze[i] )
            cout << s << ' ';
        cout << '\n';
    }
    return 0; }