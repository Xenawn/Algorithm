#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main() {

	int n;
	cin >> n;

	for (int i = 1; i * i <= n; i++) {

		if (n % i == 0) {
			v.push_back(i);
			int num = n / i;
			if (num == i)continue;

			v.push_back(num);
		}
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
}