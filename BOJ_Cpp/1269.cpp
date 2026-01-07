#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int al, bl;

	cin >> al >> bl;

	unordered_set <int> a;
	unordered_set <int> b;

	for (int i = 0; i < al; i++) {
		int num;
		cin >> num;
		a.insert(num);
	}
	for (int i = 0; i < bl; i++) {
		int num;
		cin >> num;
		b.insert(num);
	}
	int cnt = 0;
	for (auto c : a) {

		if (b.find(c) != b.end()) continue;
		cnt++;
	}

	for (auto c : b) {
		
		if (a.find(c) != a.end()) continue;
		cnt++;
	}

	cout << cnt;
}