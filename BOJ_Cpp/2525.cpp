#include <bits/stdc++.h>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	int h;
	int m = b + c;
	h = m / 60;
	m %= 60;
	if (a + h < 24) {
		cout << a + h << ' ' << m;
	}
	else  {
		cout << (a + h) % 24 << ' ' << m;
	}
}