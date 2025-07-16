#include <bits/stdc++.h>
using namespace std;

int main() {
	int price;
	int n;
	int total = 0;
	cin >> price >> n;
	for (int i = 0; i < n; i++) {
		int cost, count;
		cin >> cost >> count;
		total += cost * count;
	}

	if (total == price) {
		cout << "Yes";
	}
	else
		cout << "No";
}