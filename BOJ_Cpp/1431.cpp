#include <bits/stdc++.h>
using namespace std;

// 시리얼 번호
// 생각해야할 것 숫자 vs 영어만
bool cmp(string str1, string str2) {
	if (str1.length() != str2.length()) { // 길이가 같을 때
		if (str1.length() < str2.length()) return true;
		return false;
	}
	else { // 길이가 같지 않을 때
		int sum1 = 0; // 숫자만
		int sum2 = 0; // 숫자만
		for (char a : str1) {// 숫자만 더함
			if (a >= '0' && a <= '9') {
				sum1 += (a - '0');
			}
		}

		for (char b : str2) {  // 숫자만 더함
			if (b >= '0' && b <= '9') {
				sum2 += (b - '0');
			}
		}

		if (sum1 == sum2)  // 합이 같을 때
			return str1 < str2;  // 사전 순
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