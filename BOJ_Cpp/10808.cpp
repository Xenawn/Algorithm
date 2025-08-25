#include <bits/stdc++.h>
using namespace std;

int arr[27];
int main() {

	string str;

	cin >> str;

	for (auto s : str) {
		arr[s - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}
}