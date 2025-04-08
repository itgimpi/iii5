#include <bits/stdc++.h>
using namespace std;
// Достижни чворови
// solution using queue

bool bfs( int r1, int r2, vector<bool>&posecen, const vector<vector<int>>&veze ) {
    queue<int>red; // bfs
    red.push(r1); // samo pocetni cvor trenutno ide na red
    posecen[r1] = true; // on je i posecen
    bool povezani = false; // r1 i r2 nisu povezani, za sada...

    while ( !red.empty() && !povezani ) { // dok ima nesto na redu && nije reseno
        int r = red.front(); red.pop(); // uzmi sa pocetka reda
        for ( auto rr : veze[r] ) { // za sve njegove komsije...
            if ( rr == r2 ) { // da li postoji veza
                povezani = true; // da
                break; // izadji iz iteracije
            }
            // ako nije posecen...
            if (!posecen[rr]) {
                posecen[rr] = true; // sad jeste
                red.push(rr); // ide na red
            }
            // ako je vec posecen, ONDA NISTA...
        }
    }
    if (povezani) return true;
    return false;

}

int main () {
    ios_base::sync_with_stdio(false);
    int n, e; cin >> n >> e;
    vector<vector<int>>veze(n); // od 0 do n-1

    for ( int i = 0; i < e; i++ ) {
        int u, v;
        cin >> u >> v; u--; v--; // od 0 do n-1
        veze[u].push_back(v); }

    int q; cin >> q;
    while (q--) { // za sve upite...
        int poc, kraj;
        cin >> poc >> kraj; poc--; kraj--;
        vector<bool>posecen(n, false);
        if ( bfs( poc, kraj, posecen, veze ) ) // bool bfs
            cout << "da" << '\n';
        else
            cout << "ne" << '\n'; }
    return 0; }