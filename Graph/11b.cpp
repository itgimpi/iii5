#include <bits/stdc++.h>
using namespace std;
// Листе повезаности


int main () {
    ios_base::sync_with_stdio(false);

    int n, e; cin >> n >> e;
    vector<vector<int>>veze(n);

    for (int i = 0; i < e; i++) {
        int u, v; cin >> u >> v; 
        veze[u].push_back(v);
        veze[v].push_back(u);
    }
    
    for ( int i = 0; i < n; i++ ) {
        sort(begin(veze[i]), end(veze[i]));

        for ( auto v : veze[i] )
            cout << v << ' ';
        cout << '\n';
    }

    return 0; }