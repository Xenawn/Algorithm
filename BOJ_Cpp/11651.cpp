#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>i, pair<int,int> j) {
	
	if (i.second == j.second)
		return i.first < j.first;
	else
		return i.second < j.second;

}
int main() {

	int n;
	cin >> n;
	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end(),compare);

	for (int i = 0; i < n; i++) {
		cout << v[i].first <<' '<< v[i].second<<'\n';
	}
}