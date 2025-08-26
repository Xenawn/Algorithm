#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

void solve(int n) {

	for (int i = 2; i*i <= n; i++) {

		while (true) {
			if (n % i == 0) {
				v.push_back(i);
				n /= i;
			}
			else break;
		}
	}

	if (n != 1) v.push_back(n);

}
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	solve(n);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}