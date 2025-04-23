#include <bits/stdc++.h>
using namespace std;
// Компоненте повезаности
// BFS / DFS

void dfs(const vector<vector<int>>&veze, vector<int>&komp, int rbk, int c) {
    komp[c] = rbk;
    for ( auto v : veze[c] ) // za svakog komsiju od c...
        if (komp[v] == 0)
            dfs(veze, komp, rbk, v);
}

int main () {
    ios_base::sync_with_stdio(false);
    int n, e; cin >> n >> e;
    vector<vector<int>>veze(n);
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        veze[u].push_back(v);
        veze[v].push_back(u);
    }
    vector<int>komp(n, 0); // 0 - neobradjen cvor
    int rbk = 0; // 1, 2, 3, ...
    for ( int i = 0; i < n; i++ ) // pokreni dfs iz svakog cvora...
        if ( komp[i] == 0 )
            dfs(veze, komp, ++rbk, i);
    for (int i = 0; i < n; i++)
        cout << komp[i] << ' ';
   
    return 0; }