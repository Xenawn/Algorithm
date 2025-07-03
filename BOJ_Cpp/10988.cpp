#include <bits/stdc++.h>
using namespace std;
// 팰린드롬인지 확인하기

int main() {

	string str;
	int num=1;
	cin >> str;

	for (int i = 0; i < str.length()/2; i++) {

		if (str[i] != str[str.length() - i-1]) {
			num = 0;
			break;
		}

	}

	cout << num;
}