#include <bits/stdc++.h>
using namespace std;

int x[1000001];
vector <int> uni;
int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		uni.push_back(x[i]);
	}

	sort(uni.begin(), uni.end());
	uni.erase(unique(uni.begin(), uni.end()),uni.end());

	for (int i = 0; i < n; i++) {
		cout << lower_bound(uni.begin(), uni.end(), x[i]) - uni.begin() << ' ';
	}
}