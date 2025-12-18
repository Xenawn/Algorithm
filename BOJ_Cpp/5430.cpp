#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	string op;
	int n;
	string str;
	for (int i = 0; i < t; i++) {

		deque<int> q;
		cin >> op >> n >> str;
		bool er = false;
		bool rv = true;
		int num = 0;
		int cur = 0;
		for (int a = 1; a<str.size()-1; a++) {
			if (str[a] == ',') {
				q.push_back(cur);
				cur = 0;
			}
			else {
				cur = cur * 10 + (str[a] - '0');
			}
		}
		
		if (cur != 0) q.push_back(cur);
		for (auto o : op) {
			if (o =='R') {
				rv = !rv;
			}
			else {

				if (q.empty()) {
					cout << "error" << '\n';
					er = true;
					break;
				}
				if (rv) q.pop_front(); 
				else q.pop_back();
			}
		}
		if (er)continue;
		if(rv){
			cout << "[";
			for (int j = 0; j < q.size(); j++) {

				cout << q[j];
				if (j == q.size() - 1)
					continue;
				cout << ',';
			}
			cout << "]\n";
		}

		else {
			cout << "[";
			for (int j = q.size()-1; j >= 0; j--) {

				cout << q[j];
				if (j == 0)
					continue;
				cout << ',';
			}
			cout << "]\n";
		}
	}
}