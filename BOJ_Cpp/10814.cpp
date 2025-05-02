#include <bits/stdc++.h>
using namespace std;

bool compare1(pair<int, string>a, pair<int, string> b) {

	return a.first < b.first;
}
int main() {

	

	int n;

	cin >> n;

	vector<pair<int, string>> member;


	for (int i = 0; i < n; i++) {
		int num = 0;
		string str;
		cin >> num >> str;
		member.push_back({ num,str });
	}


	
	stable_sort(member.begin(), member.end(),compare1);

	for (int i = 0; i < n; i++) {
		cout << member[i].first << ' '<< member[i].second << '\n';
		
	}
}