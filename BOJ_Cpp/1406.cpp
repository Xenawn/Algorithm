#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;
	cin >> str;
	
	list<char> s;
	for (auto a : str) {
		s.push_back(a);
	}
	list<char>::iterator L = s.end();
	int n;

	cin >> n;

	char od;
	
	while (n--) {
		cin >> od;
		char ch;
		if (od == 'P') { cin >> ch;  s.insert(L, ch); }
		else if (od == 'L') {
			if (L != s.begin())  L--;
		}
		else if (od == 'D') {
			if (L != s.end()) L++;
		}
		else if (od == 'B') {
			if (L != s.begin()) {
				L--;
				L = s.erase(L);
			}
		}

	}

	for (auto c : s) {
		cout << c;
	}
}