#include <bits/stdc++.h>
using namespace std;

// 주사위 세개
int main() {

	int a, b, c;
	cin >> a >> b >> c;
	if (a == b &&b== c&&c==a) {
		cout << 10000 + (a * 1000) << endl;
	}
	else if (a == b || b == c || c == a) {
		if (a == b)
			cout << 1000 + (a * 100) << endl;
		else if(b==c)
			cout << 1000 + (b * 100) << endl;
		else if(c==a)
			cout << 1000 + (c * 100) << endl;
	}
	else {
		int mx = max({ a, b, c });
		cout << mx * 100 << endl;
	}

}