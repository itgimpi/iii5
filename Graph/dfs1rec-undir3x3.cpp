#include <bits/stdc++.h>
using namespace std;
// directed graph
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
    int nc = 9; // number of nodes, cin >>
    //int ne = 5; // number of edges

    vector<vector<int>>veze;
    veze.resize(nc);
    vector<bool>posecen;
    posecen.resize(nc, false);

    dodaj(0, 1, veze); dodaj(0, 3, veze);
    dodaj(1, 2, veze); dodaj(1, 4, veze);
    dodaj(2, 5, veze);
    dodaj(3, 4, veze); dodaj(3, 6, veze);
    dodaj(4, 5, veze); dodaj(4, 7, veze);
    dodaj(5, 8, veze);
    dodaj(6, 7, veze);
    dodaj(7, 8, veze);
    dfs(1, veze, posecen); // pokreni dfs iz cvora 1
    //dfs(0, veze, posecen); // pokreni dfs iz cvora 0
    //dfs(6, veze, posecen); // pokreni dfs iz cvora 6
    //dfs(4, veze, posecen); // pokreni dfs iz cvora 4

    return 0; }