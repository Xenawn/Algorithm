#include <bits/stdc++.h>
using namespace std;

int main() {

	int a, b, n;

	cin >> a >> b >> n;

	int result;
	
	while (n--) {
		a %= b;
		a *= 10;
		result = a / b;
	}

	cout << result;
}