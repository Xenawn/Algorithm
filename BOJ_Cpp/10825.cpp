#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<tuple< int, int,int,string>> v;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string name;
		int a, b, c;
		cin >> name >> a >> b >> c;

		v.push_back({ -a,b,-c,name });
	} 

	sort(v.begin(), v.end());

	
	for (auto& s : v) {
		cout << get<3>(s) << '\n';
	}
}