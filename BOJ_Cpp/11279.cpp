#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	priority_queue<int> Q;

	while (n--) {
		int input;
		cin >> input;
		if (input == 0) {
			if (Q.empty()) {
				cout  << 0 << '\n';
			}
			else
			{
				cout  << Q.top() << '\n';
				Q.pop();
			}

		}
		else {
			Q.push(input);
		}
		
	}
}