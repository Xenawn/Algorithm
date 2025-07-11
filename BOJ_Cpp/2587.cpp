#include <bits/stdc++.h>
using namespace std;


int main() {

	int sum = 0;
	vector<int> v;

	int num;
	for (int i = 0; i < 5; i++) {

		cin >> num;
		sum += num;
		v.push_back(num);

	}

	sort(v.begin(), v.end());

	
	cout << sum / 5 << '\n' << v[2];
}