#include <bits/stdc++.h>
using namespace std;

int main() {


	string s;
	bool isPalin = true;
	while (true) {
		isPalin = true;
		cin >> s;
		if (s == "0") break;
		
		for (int i = 0; i < s.length() / 2; i++) {
			
			if (s[i] != s[s.length()-1-i]) {
				isPalin = false;
				break;
			}
		}
		if (isPalin)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

}