#include <bits/stdc++.h>
using namespace std;
// E W Dijkstra
// tezinski usmereni graf, u.----d---->.v
const int INF = INT_MAX;
int main () {
    int n, e; cin >> n >> e;
    vector<vector< pair<int, int> >>veze(n);
    for (int i = 0; i < e; i++) {
        int u, v, d; cin >> u >> v >> d;
        veze[u].emplace_back(v, d);
    }
    int pocetak; cin >> pocetak;
    
    vector<int>rast0(n, INF); // rast. od poc. cvora
    rast0[pocetak]=0; // poc. je na 0, sam od sebe
    vector<bool>resen(n, false); // Vk, reseni cvorovi
    int brres = 0; // broj resenih

    while ( brres < n ) { // nisu svi reseni?
        // prvo se trazi najmanje rastojanje iz skupa Vk'
        int najblizi = 0; // indeks
        int najmanje_rast = INF; // vrednost
        
        for ( int c = 0; c < n; c++ ) // proveri sve cvorove
            //proveri samo neresene 
            if (!resen[c] && rast0[c] < najmanje_rast ) {
                najblizi = c;
                najmanje_rast = rast0[c]; }
        // poznat je indeks najblizeg cvora
        resen[najblizi] = true; // proglasen je resenim
        brres++;
        // komsiluk
        for ( auto kom : veze[najblizi] ) { // za svakog komsiju...
            int cvor, rast;
            tie(cvor, rast) = kom;
            // treba li azuriranje rasojanja od poc.
            if ( !resen[cvor] && najmanje_rast + rast < rast0[cvor] )
                rast0[cvor] = najmanje_rast + rast; } 
    }
    for (int i = 0; i < n; i++)
        cout << "od " << pocetak << " do " << i << " rastojanje je " << rast0[i] << '\n';
    return 0; }