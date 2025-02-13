#include <bits/stdc++.h>
using namespace std;

int main() {

	

	int n;
	cin >> n;
	vector<pair<int, int>> v(n); // 열만 가지고 정렬하기 위해
	int first, second;

	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].first <<' ' << v[i].second << '\n';
	}

}