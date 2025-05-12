#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	queue<int> Q;
	for (int i = 0; i < n; i++) {

		string str;
		int num;

		cin >> str;
		if (str == "push") {
			cin >> num;
			Q.push(num);
		}

		else if (str == "pop") {
			if (Q.empty()) 
				cout << -1 << '\n';
			else { 
				cout << Q.front() << '\n';
				Q.pop();
			}
		}

		else if (str == "size") {
			cout << Q.size() << '\n';
		}
		else if (str == "empty") {
			cout << Q.empty() << '\n';
		}
		else if (str == "front") {
			if (Q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << Q.front() << '\n';
			}
		}

		else if (str == "back") {
			if (Q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << Q.back() << '\n';
			}
		}
	}
}