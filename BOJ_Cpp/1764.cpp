#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	unordered_set <string> s;
	vector<string> solve;
	int n, m;

	cin >> n >> m;

	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		s.insert(str);
	}
	
	for (int i = 0; i < m; i++) {
		cin >> str;

		if (s.find(str) != s.end())
			solve.push_back(str);
	}

	sort(solve.begin(), solve.end());

	cout << solve.size() << '\n';
	for (int i = 0; i < solve.size(); i++) {
		cout << solve[i] << '\n';
	}
}