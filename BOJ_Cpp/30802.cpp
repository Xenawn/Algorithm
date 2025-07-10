#include <bits/stdc++.h>
using namespace std;

int shirt[6];
int check[6];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int t, p;
	int countT = 0;
	int countP = 0;
	int mx = 1;
	cin >> n;


	for (int i = 0; i < 6; i++) {
		cin >> shirt[i];
	}
	cin >> t >> p;

	for (int i = 0; i < 6; i++) {
		if (shirt[i] == 0) continue;
		if (t%shirt[i] !=t) {
			countT++;
		}
		else {
			countT += (shirt[i] / t);
			if (shirt[i] % t != 0) {
				countT++;
			}

		}
	}

	cout << countT << endl;
	cout << n / p << ' ' << n % p;
}