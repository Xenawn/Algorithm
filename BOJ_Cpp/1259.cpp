#include <bits/stdc++.h>
using namespace std;

int main() {


	string s;
	bool isPalin = true;
	while (true) {
		isPalin = true;
		cin >> s;
		if (s == "0") break;
		int size = s.length()-1;
		int count = s.length() / 2;
		for (int i = 0; i < count; i++) {
			
			if (s[i] != s[size]) {
				cout << "no" << endl;
				isPalin = false;
				break;
			}
			size--;
		}
		if(isPalin)
			cout << "yes" << endl;
		
	}

}