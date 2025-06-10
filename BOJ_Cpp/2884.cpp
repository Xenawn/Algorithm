#include <bits/stdc++.h>
using namespace std;

int main() {

	int h, m;
	cin >> h >> m;

	if (m < 45) {
		m += 60;
		m -= 45;
		
		if (h == 0) {
			h += 24;
		}
		h -= 1;
	}
	else {
		m -= 45;
	}

	cout << h << ' ' << m << endl;
}