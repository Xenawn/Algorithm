#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string order;
	unordered_set<int> s;
	int num;
	for (int i = 0; i < n; i++) {

		cin >> order;

		if (order == "add") {
			cin >> num;
			s.insert(num);
		}
		else if (order == "check") {
			cin >> num;
			if (s.find(num) != s.end()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (order == "remove") {
			cin >> num;
			s.erase(num);
		}
		else if (order == "toggle") {
			cin >> num;
			if (s.find(num) != s.end()) {
				s.erase(num);
			}
			else {
				s.insert(num);
			}
		}

		else if (order == "all") {
			s.insert({ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 });
		}

		else if (order == "empty") {
			s.clear();
		}
	}
}