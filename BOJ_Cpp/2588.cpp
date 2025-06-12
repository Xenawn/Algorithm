#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	int total;
	cin >> a >> b;
	total = a * b;
	while (b != 0) {
		cout << a * (b % 10) << endl;
		b /= 10;
	}

	cout << total;
}