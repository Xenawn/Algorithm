#include <bits/stdc++.h>
using namespace std;

int arr[26];
int main() {
	string str;
	int num = 0;
	cin >> str;

	fill(arr, arr + 26, -1);
	for (auto a : str) {
		if (arr[a - 'a'] != -1) { num++;  continue; }
		arr[a - 'a'] = num++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}
}