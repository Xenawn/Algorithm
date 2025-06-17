#include <bits/stdc++.h>
using namespace std;

int main() {
	string str1, str2;
	string str3, str4;
	cin >> str1 >> str2;

	for (int i = str1.length() - 1; i >= 0; i--) {

		str3 += str1[i];
	}

	for (int i = str2.length() - 1; i >= 0; i--) {

		str4 += str2[i];
	}

	if (str3 > str4) cout << str3;
	else cout << str4;
}