#include <bits/stdc++.h>
using namespace std;

long long Calc(long long a, long long b) {

	return (a + b) * (a - b);
}
int main() {

	long long a, b;
	cin >> a >> b;
	cout << (a + b) * (a - b);
}