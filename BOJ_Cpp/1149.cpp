#include <bits/stdc++.h>
using namespace std;

int d[1001][3];
int color[1001][3];
int main() {

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> color[i][0] >> color[i][1] >> color[i][2];
	}
	d[1][0] = color[1][0];
	d[1][1] = color[1][1];
	d[1][2] = color[1][2];


	
	for (int i = 1; i <= n; i++) {
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + color[i][0];
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + color[i][1];
		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + color[i][2];
	}
	cout << min({ d[n][0], d[n][1], d[n][2] });
}