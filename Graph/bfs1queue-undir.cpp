#include <bits/stdc++.h>
using namespace std;
// undirected graph
// BFS using queue + vector

void dodaj(int u, int v, vector<vector<int>> &veze) {
    veze[u].push_back(v);
    veze[v].push_back(u); }

void bfs(int c, const vector<vector<int>> &veze, vector<bool> &posecen) {
    queue<int>red;
    red.push(c); // pocetni cvor ide na stek
    posecen[c] = true; // posecen je

    while ( !red.empty() ) { // sve dok ima nesto na steku...
        int cvor = red.front(); // uzmi sa vrha steka
        red.pop(); // i skloni
        cout << cvor << ' ';
        for ( auto s : veze[cvor] ) // za sve susede...
            if ( !posecen[s] ) { // ako nisu poseceni
                posecen[s] = true;
                red.push(s);
            }
    }
    return;
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
    bfs(0, veze, posecen); // pokreni dfs iz cvora 0


    //dfs(0, veze, posecen); // pokreni dfs iz cvora, npr. iz 0
    //dfs(4, veze, posecen); // pokreni dfs iz cvora, iz 1
    return 0; }