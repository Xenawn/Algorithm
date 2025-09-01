#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;


int main() {

	int n;
	cin >> n;
	unordered_set<string> uset;

	
	for (int i = 0; i < n; i++) {
		string str;
		string order;
		cin >> str >> order;
		
		if (order == "enter") {
			uset.insert(str);
		}
		if (order == "leave") {
				uset.erase(uset.find(str));
		}
		
	}
	vector<string> v( uset.begin(), uset.end());
	sort(v.begin(), v.end(), greater<string>());
	for (auto a : v) {
		cout << a << '\n';
	}

	
}