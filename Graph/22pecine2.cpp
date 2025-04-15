#include <bits/stdc++.h>
using namespace std;
// Пећине
// BFS / DFS

int main () {
    ios_base::sync_with_stdio(false);
    int h0; cin >> h0; // poc. visina
    int n; cin >> n; // br. dv
    // pamti se...
    vector<vector< pair<int, int> >>veze(n); // tezinski

    for (int i = 0; i < n-1; i++) { // unos
        int poc, kraj, raz;
        cin >> poc >> kraj >> raz;
        veze[poc].emplace_back(kraj, raz); }

    queue< pair<int,int> >red; // red, BFS
    red.emplace(0, h0);
    int najmanja = h0; // naj

    while ( !red.empty() ) {
        pair<int,int> d = red.front(); red.pop();
        najmanja = min(najmanja, d.second);
        for ( auto v : veze[d.first] )
            red.emplace(v.first, d.second + v.second);


    }
    cout << najmanja;
    return 0; }