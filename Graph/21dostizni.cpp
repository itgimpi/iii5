#include <bits/stdc++.h>
using namespace std;
// Достижни чворови
// rec. solution
bool dfs( int r1, int r2, vector<bool>&posecen, 
                    const vector<vector<int>>&veze ) {
    // isti?
    if ( r1 == r2 ) return true;
    // nisu...
    if ( posecen[r1] ) return false;
    // nisu isti i r1 nije posecen...
    posecen[r1] = true; // sad jeste
    for ( auto r : veze[r1] ) // za sve susede od r1...
        if ( dfs(r, r2, posecen, veze) )
            return true;

    return false; } // ne moze da se posalje poruka...

int main () {
    ios_base::sync_with_stdio(false);
    int n, e; cin >> n >> e; // br. cvorova i br. veza
    //vector<vector<int>>veze(n+1); // od 1 do n
    vector<vector<int>>veze(n); // od 0 do n-1

    for ( int i = 0; i < e; i++ ) { // sve veze
        int u, v; // polazni i dolazni cvor
        //cin >> u >> v; // od 1 do n
        cin >> u >> v; u--; v--; // od 0 do n-1
        veze[u].push_back(v); } // u.---->.v

    int q; cin >> q;
    //for (int i = 0; i < q; i++)
    while (q--) { // za sve upite...
        int poc, kraj;
        //cin >> poc >> kraj; // od 1 do n
        cin >> poc >> kraj; poc--; kraj--; // od 0 do n-1

        vector<bool>posecen(n, false); // za svaki upit
        if ( dfs( poc, kraj, posecen, veze ) ) // bool dfs
            cout << "da" << '\n';
        else
            cout << "ne" << '\n'; }
    return 0; }