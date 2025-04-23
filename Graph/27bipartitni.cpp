#include <bits/stdc++.h>
using namespace std;
// Да ли је бипартитан

bool bipart(const vector<vector<int>>&veze, vector<int>&res, int n) {
    vector<int>boja(n, -1); // svi cvorovi su neobojeni
    boja[0] = 1; // prvi cvor dobija neku boju
    // BFS
    queue<int>q;
    q.push(0); // pocinje se sa prvim cvorom
    res.push_back(0); // on je i prvo resenje

    while( !q.empty() ) { // sve dok ima cvorova za obradu...
        int u = q.front(); q.pop();
        for ( auto v : veze[u] ) { // v su sve veze od u...
            if ( boja[v] == -1 ) { // da li nije obojen?
                if ( boja[u] == 1 )
                    boja[v] = 0;
                else    
                    boja[v] == 1;
                q.push(v);
                //resenje?
                if ( boja[v] == 1 )
                    res.push_back(v);
                
            } 
            // ipak je obojen?
            else if ( boja[u] == boja[v] )
                return false; // nije bipartitan!

        }

    }
    return true;

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
    cout << "kraj unosa";
    
    vector<int>res;
    if ( bipart(veze, res, n) ) cout << '+';
    if ( !bipart(veze, res, n) ) cout << '-';
    else {
        sort(res.begin(), res.end());
        for ( auto r : res ) cout << r << ' ';
    }
   
    return 0; }