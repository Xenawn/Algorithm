#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int main() {

	int n;
	stack<int> S;
	vector<string> V;
	cin >> n;
	int max = 1;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		while (max <= num) {
			S.push(max);
			V.push_back("+");
			max++;
		}

		if (num == S.top()) {
			V.push_back("-");
			S.pop();
		}
		else {
			cout << "NO" << '\n';
			return 0;
		}
		
	}

	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << '\n';
	}
}