#include <bits/stdc++.h>
using namespace std;
// my 2nd directed graph, using vv, hand made

int main () {
    int n = 4; // number of nodes
    int e = 5; // number of edges

    vector<vector<int>>susedi(n);

    susedi[0].push_back(1); // 0 -> 1
    susedi[0].push_back(2); // 0 -> 2 
    susedi[1].push_back(2); // 1 -> 2   
    susedi[2].push_back(3); // 2 -> 3
    susedi[3].push_back(1); // 3 -> 1

    for ( auto node = 0; node < n; node++ )
        for ( auto s : susedi[node] )
            cout << node << "->" << s << endl;

    return 0; }