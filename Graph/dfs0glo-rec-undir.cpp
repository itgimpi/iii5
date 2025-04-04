#include <bits/stdc++.h>
using namespace std;
// undirected graph
// DFS using recursion + vector
// global

vector<vector<int>>veze;
vector<bool>posecen;

void dodaj(int u, int v) {
    veze[u].push_back(v);
    veze[v].push_back(u); } // jedina izmena!!!

void dfs(int c) {
    if ( !posecen[c] ) {
        posecen[c] = true;
        cout << c << ' ';
        for ( auto s : veze[c] )
            dfs(s);
    }
}

int main () {
    int nc = 5; // number of nodes, cin >>
    //int ne = 5; // number of edges

    veze.resize(nc);
    posecen.resize(nc, false);

    dodaj(0, 1);
    dodaj(0, 2);
    dodaj(1, 3);
    dodaj(2, 3);
    dodaj(3, 4);

    //dfs(0); // pokreni dfs iz cvora iz 0
    dfs(1); // pokreni dfs iz cvora iz 1

    return 0; }