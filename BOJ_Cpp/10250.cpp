#include <bits/stdc++.h>
using namespace std;

int main() {

	int h, w, n;

	int t;

	
	cin >> t;

	for (int i = 0; i < t; i++) {

		cin >> h >> w >> n;
		int rest = n / h ;

		if (n % h == 0) {
			if (rest < 10)
				cout << h << 0 << rest << endl;
			else
				cout << h << rest << endl;
		}
		else {
			if (rest + 1 < 10)
				cout << n % h << 0 << rest + 1 << endl;
			else
				cout << n % h << rest + 1 << endl;
		}
	}
}