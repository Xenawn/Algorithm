#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	int repeat;
	string str;
	cin >> n;

	for (int i = 0; i < n; i++) {
		
		cin >>repeat >> str;
		
		for (auto a : str) {
			for (int i = 0; i < repeat; i++) {
				cout << a;
			}
		}
		cout << '\n';
	}
}