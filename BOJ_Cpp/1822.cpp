#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> b;
vector<int> c;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		a.push_back(num);
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		if (binary_search(a.begin(), a.end(), num)) {
			int z = lower_bound(a.begin(), a.end(), num) - a.begin();
			b.push_back(z);
		}
	}
	
	int k = a.size();
	for (int i = 0; i < b.size(); i++) {
		a[b[i]] = -1;
		k--;
	}

	cout << k << '\n';
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == -1) continue;
		cout << a[i] << ' ';
	}
	
}