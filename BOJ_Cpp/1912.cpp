#include <bits/stdc++.h>
using namespace std;

int t[100001];
int d[100001];
int main() {

	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> t[i];
	}


	for (int i = 1; i <= n; i++) {
		d[i] = max(0, d[i - 1]) + t[i];
	}
	cout << *max_element(d + 1, d + n + 1);


}