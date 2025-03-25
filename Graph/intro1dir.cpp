#include <bits/stdc++.h>
using namespace std;
// my 1st directed graph, using matrix, hand made

int main () {
    int n = 4; // number of nodes
    int e = 5; // number of edges

    int veze[4][4];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            veze[i][j] = 0; // matrica bez veza

    veze[0][1] = 1; // 0 -> 1
    veze[0][2] = 1; // 0 -> 2
    veze[1][2] = 1; // 1 -> 2
    veze[2][3] = 1; // 2 -> 3
    veze[3][1] = 1; // 3 -> 1

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << veze[i][j];
        cout << '\n'; }

    return 0; }