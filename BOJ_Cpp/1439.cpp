#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;

	cin >> str;

	int one = 0;
	int zro = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != str[i + 1]) {
			if (str[i] == '0')zro++;
			else one++;
		}
	}

	cout << min(one, zro);
}