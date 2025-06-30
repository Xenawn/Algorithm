#include <bits/stdc++.h>
using namespace std;


void func(int a, int b, int n) {

	if (n == 1) {
		cout << a << ' ' << b << '\n';
		
		return;
	}
	func(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << '\n';
	func(6 - a - b, b, n - 1);
	
	
		
}

int main() {

	int n;
	int num = 1;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		num *= 2;
	}
	cout << num - 1 << endl;
	func(1, 3, n);
}