#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	
	vector <string> v;
	vector <long long> solve;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string num;
		cin >> num;
		v.push_back(num);
		reverse(v[i].begin(), v[i].end());
		long long digitNumber = stoll(v[i]);
		solve.push_back(digitNumber);
	}

	sort(solve.begin(), solve.end());

	for (int i = 0; i < n; i++) {
		cout << solve[i] << '\n';
	}
}