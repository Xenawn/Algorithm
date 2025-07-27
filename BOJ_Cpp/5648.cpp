#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	vector <long long> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string num;
		string sv;
		cin >> num;
		long long size = num.length();
		while(size--){
			sv += num[size];
		}
		long long digitNumber = stoll(sv);
		v.push_back(digitNumber);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i] << '\n';
	}
}