#include <bits/stdc++.h>
using namespace std;

pair<int, int> p[100002];

bool cmp(pair<int,int> a, pair<int,int> b) {

	if (a.second == b.second) {
		return a.first < b.first;
	}
	
	return a.second < b.second;
}
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p[i].first >> p[i].second;
	}
	
	sort(p, p + n,cmp);
	int cur = p[0].second;
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (cur <= p[i].first) {
			cur = p[i].second;
			cnt++;
		}
	}
	cout << cnt;
}