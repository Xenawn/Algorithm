#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	vector<int> v;

	for (int i =0; i<3; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < 3; i++) {
		cout << v[i] << ' ';
	}
}