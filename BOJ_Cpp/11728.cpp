#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, m;
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	vector<int> a;
	vector<int> b;
	vector<int> c;
	int num;
	

	for (int i = 0; i < n; i++) {
		cin >> num;
		a.push_back(num);
	}
	for (int i = 0; i < m; i++) {
		cin >> num;
		b.push_back(num);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());



	int i = 0;
	int j =0;
	int count = n + m;
	while (count--) {
		
		if (i < n) {
			if (j == m) {
				c.push_back(a[i]);
				i++;
				continue;
			}
			if (a[i] <= b[j]) {
				c.push_back(a[i]);
				i++;
			}
		}
		if (j < m) {
			if (i == n) {
				c.push_back(b[j]);
				j++;
				continue;
			}
			if (a[i] > b[j]) {
				c.push_back(b[j]);
				j++;
			}
		}
	}
	for (int k = 0; k < n + m; k++) {
		cout << c[k] << ' ';
	}

}