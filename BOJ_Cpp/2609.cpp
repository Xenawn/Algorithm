#include <bits/stdc++.h>
using namespace std;


int main() {

	int a, b;
	int mx;
	int min;
	cin >> a >> b;
	int divide = a < b ? a : b;
	for (int i = 1; i <= divide; i++) {
		if (a % i == 0 && b % i == 0) {
			mx = i;
			min = mx * (a / i) * (b / i);
		}
	}

	cout << mx << '\n' << min;
}

