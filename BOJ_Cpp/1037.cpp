#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main() {



	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	if (v.size() == 1) cout << v[0] * v[0];
	else cout << v[0] * v[n - 1];
}