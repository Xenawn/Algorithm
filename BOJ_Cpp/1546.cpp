#include <bits/stdc++.h>
using namespace std;

int scoreArr[10001];
int main() {

	int n;
	double total = 0;
	int mx = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> scoreArr[i];
		mx = max(mx, scoreArr[i]);

	}


	for (int i = 0; i < n; i++) {
		total += ((scoreArr[i] * 100 / (double)mx));
	}
	cout.precision(5);



	cout << total / (double)n;



}