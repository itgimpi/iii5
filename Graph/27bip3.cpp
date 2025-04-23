#include <bits/stdc++.h>
using namespace std;
// Да ли је бипартитан

bool bipart(const vector<vector<int>>&veze, vector<int>&res, int n) {
    vector<int>boje(n, -1); // -1 su neobojeni cvorovi
    boje[0] = 1; // prvi cvor je boje 1
    queue<int>q;
    q.push(0);
    res.push_back(0);

    while ( !q.empty() ) {
        int u = q.front(); q.pop();
        for ( auto v : veze[u] ) {
            if ( boje[v] == -1 ) { // v nije obojen?
                boje[v] = 1 - boje[u];
                q.push(v);
                if (boje[v]==1) res.push_back(v);

            }
            else if ( boje[u] == boje[v] )
                return false;

        }

    }
    return true;
}

int main () {
    ios_base::sync_with_stdio(false);
    int n, e; cin >> n >> e;
    vector<vector<int>>veze(n);
    for ( int i = 0; i < e; i++ ) {
        int u, v;
        cin >> u >> v;
        veze[u].push_back(v);
        veze[v].push_back(u);
    }
    vector<int>res;
    if ( !bipart(veze, res, n) ) cout << '-';
    else {
        sort(res.begin(), res.end());
        for (auto r : res) cout << r << ' ';
    }

    
   
    return 0; }