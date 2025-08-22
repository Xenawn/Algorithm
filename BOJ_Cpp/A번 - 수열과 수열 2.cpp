#include <bits/stdc++.h>
using namespace std;
long long arr[200003];
int main() {

	long long n;
	long long md = 998244353;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	long long mp = 1;

	for (int i = 0; i < n; i++) {
		long long seq = i + 1;
		long long sv = arr[i];
		long long cnt = n;

		if (seq == sv) cnt -= 1;
		else cnt -= 2;
		mp = (mp * cnt) % md;
	}
	cout << mp;

}