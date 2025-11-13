#include <bits/stdc++.h>
using namespace std;

vector <int> a;
vector <int> b;

int main() {

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		a.push_back(num);
	}

	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		b.push_back(num);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	vector <int> ans;
	for (int k : a) {
		if(binary_search(b.begin(),b.end(),k)) continue;
		ans.push_back(k);
	}

	cout << ans.size() << '\n';
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << ' ';
	}
}