#include <bits/stdc++.h>
using namespace std;

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(0);
	vector<int> a;
	char c;
	while (cin >> c) {
		if (c == 'w') {
			int i, x;
			cin >> i >> x >> ws;
			if (i >= a.size())
				a.resize(i+1);
			a[i] = x;	} 
		else if (c == 'r') {
			int i;
			cin >> i >> ws;
			cout << (i < a.size() ? a[i] : 0) << '\n';	} 
		else if (c == 'p') {
			int x;
			cin >> x >> ws;
			a.push_back(x); 	} } }