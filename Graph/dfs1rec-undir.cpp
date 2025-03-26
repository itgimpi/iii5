#include <bits/stdc++.h>
using namespace std;
// undirected graph
// DFS using recursion + vector

//vector<vector<int>>veze;
//vector<bool>posecen;

void dodaj(int u, int v, vector<vector<int>> &veze) {
    veze[u].push_back(v);
    veze[v].push_back(u); }

void dfs(int c, const vector<vector<int>> &veze, vector<bool> &posecen) {
    if ( !posecen[c] ) {
        posecen[c] = true;
        cout << c << ' ';
        for ( auto s : veze[c] )
            dfs(s, veze, posecen);
    }
}

int main () {
    int nc = 5; // number of nodes, cin >>
    //int ne = 5; // number of edges

    vector<vector<int>>veze;
    veze.resize(nc);
    vector<bool>posecen;
    posecen.resize(nc, false);

    dodaj(0, 1, veze);
    dodaj(0, 2, veze);
    dodaj(1, 3, veze);
    dodaj(2, 3, veze);
    dodaj(3, 4, veze);

    dfs(0, veze, posecen); // pokreni dfs iz cvora, npr. iz 0

    return 0; }