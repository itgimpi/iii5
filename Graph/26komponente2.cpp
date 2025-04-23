#include <bits/stdc++.h>
using namespace std;
// Компоненте повезаности
// BFS / DFS

void dfs(const vector<vector<int>> &veze, vector<int> &komponente, int rbk, int c) {
    komponente[c] = rbk;
    for ( int v : veze[c] )
        if ( komponente[v] == 0 )
            dfs(veze, komponente, rbk, v); }

int main () {
    ios_base::sync_with_stdio(false);
    int n, e; cin >> n >> e;
    vector<vector<int>>veze(n);
    for ( int i = 0; i < e; i++ ) {
        int u, v; cin >> u >> v;
        veze[u].push_back(v);
        veze[v].push_back(u); }

    int rbk = 0;
    vector<int>komponente(n, 0); // 0 je neodredjena komp.
    for ( int i = 0; i < n; i++ )
        if ( komponente[i] == 0 )      // cvor
            dfs(veze, komponente, ++rbk, i);
                                  // r.b. komponente
    for (int i = 0; i < n; i++) cout << komponente[i] << ' ';
   
    return 0; }