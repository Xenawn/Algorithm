#include <bits/stdc++.h>
using namespace std;

bool cmp(tuple<string,int,int,int>& first, tuple<string,int,int,int>& second) {

	int ad = get<1>(first);
	int am = get<2>(first);
	int ay = get<3>(first);

	int bd = get<1>(second);
	int bm = get<2>(second);
	int by = get<3>(second);

	if (ay == by) {
		if (am == bm) return ad > bd;
		return am > bm;
	}
	return ay > by;
}
vector<tuple<string, int, int, int>> v;
int main() {

	int n;
	cin >> n;

	string name;
	int d, m, y;
	for (int i = 0; i < n; i++) {
		cin >> name >> d >> m >> y;

		v.push_back({ name,d,m,y });

	}

	sort(v.begin(), v.end(),cmp);

	cout << get<0>(v.front()) << '\n' << get<0>(v.back());
}