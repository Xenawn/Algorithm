#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;
	vector<char> ch;
	cin >> str;

	for (auto a : str) {
		ch.push_back(a);
	}

	sort(ch.begin(), ch.end(), greater<char>());
	

	for (int i = 0; i<ch.size();i++) {
		cout << ch[i];
	}
	
}