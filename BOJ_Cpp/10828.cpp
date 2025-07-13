#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	string str;
	stack<int> s;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> str;

		if (str == "push") {
			cin >> num;
			s.push(num);
		}
		else if (str == "pop") {
			if (s.size() == 0) {
				cout << -1 << '\n';
				continue;
			}
			cout << s.top() << '\n';
			s.pop();
		}
		else if (str == "size") {
			cout << s.size() << '\n';
		}
		else if (str == "empty") {
			cout << s.empty() << '\n';
		}
		else if (str == "top") {
			if (s.empty()) {
				cout << -1 << '\n';
				continue;
			}
			cout << s.top() << '\n';
		}
	}
}