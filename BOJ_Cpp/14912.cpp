#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	char d;

	cin >> n >> d;

	int count = 0;
	for (int i = 1; i <= n; i++ ) {

		string str = to_string(i);

		for (auto s : str) {

			if (s == d) {
				count++;
			}
		}
	}

	cout << count;
}