#include <bits/stdc++.h>
using namespace std;
// �Ӹ�������� Ȯ���ϱ�

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