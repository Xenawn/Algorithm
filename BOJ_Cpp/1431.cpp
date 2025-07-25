#include <bits/stdc++.h>
using namespace std;

// �ø��� ��ȣ
// �����ؾ��� �� ���� vs ���
bool cmp(string str1, string str2) {
	if (str1.length() != str2.length()) { // ���̰� ���� ��
		if (str1.length() < str2.length()) return true;
		return false;
	}
	else { // ���̰� ���� ���� ��
		int sum1 = 0; // ���ڸ�
		int sum2 = 0; // ���ڸ�
		for (char a : str1) {// ���ڸ� ����
			if (a >= '0' && a <= '9') {
				sum1 += (a - '0');
			}
		}

		for (char b : str2) {  // ���ڸ� ����
			if (b >= '0' && b <= '9') {
				sum2 += (b - '0');
			}
		}

		if (sum1 == sum2)  // ���� ���� ��
			return str1 < str2;  // ���� ��
		else
			return sum1 < sum2;
	}
	return str1 < str2;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<string> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << v[i] << '\n';
	}
}