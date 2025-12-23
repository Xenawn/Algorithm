#include <bits/stdc++.h>
using namespace std;

int main() {



	int n;

	cin >> n;

	while (n--) {
		stack<char> s;
		string str;
		cin >> str;
		bool sv = false;
		for (auto c : str) {

			if (c == '(') s.push('(');
			else if (c == ')') {
				if(s.empty()){

					sv = true;
					break;
				}
				else {
					s.pop();
				}
			}
			
		}
		if (sv) {
			cout << "NO" << '\n';
			continue;
		}
		else {
			if (s.empty()) {
				cout << "YES" << '\n';
			}

			else {
				cout << "NO" << '\n';
			}
		}

	}
}