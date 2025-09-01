#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

unordered_map<string,int> s;
string arr[100000];
int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		s[str] = i + 1;
		arr[i + 1] = str;
	}
	
	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;
		if (isdigit(str[0])) {
			int num = stoi(str);
			cout << arr[num] << '\n';
		}
		else
			cout << s[str] << '\n';
	}
}