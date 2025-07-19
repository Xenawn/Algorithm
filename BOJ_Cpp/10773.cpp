#include <bits/stdc++.h>
using namespace std;

int main() {

	int k;
	int sum = 0;
	stack<int> s;
	cin >> k;

	for (int i = 0; i < k; i++) {
		int num;
		cin >> num;
		if (!s.empty()&&num == 0) s.pop();
		else s.push(num);
	}

	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}

	cout << sum;

}