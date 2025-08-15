#include <bits/stdc++.h>
using namespace std;

int arr[30];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		count++;
		for (int j =0; j<str.length(); j++){
				arr[str[j] - 'a']++;
			if (j == 0) continue;
			// 연속하지 않은데 1이상이면 알파벳 1번 이상 나옴
			if ((str[j - 1] != str[j]) &&( arr[str[j] - 'a'] >1)) {
				count--; 
				break;
			}
			
		}
		fill(arr, arr + 30, 0);
		if (count < 0) count = 0;
	}
	cout << count;
}