#include <bits/stdc++.h>
using namespace std;

int main() {

	string s;
	cin >> s;
	string str;
	for (auto a : s) {
		if (isupper(a)) {
			str += tolower(a);
		}
		else {
			str += toupper(a);
		}
	}

	cout << str;
}