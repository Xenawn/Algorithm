#include <bits/stdc++.h>
using namespace std;

vector<string> s;
int main() {

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {

		string atr = str.substr(i, str.length());
		s.push_back(atr);
	}

	sort(s.begin(), s.end());

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << '\n';
	}
}