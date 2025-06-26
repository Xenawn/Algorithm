#include <bits/stdc++.h>
using namespace std;

long long multiply(long long a, long long b, long long m) {

	if (b == 1) return a % m;
	long long val = multiply(a, b / 2, m);
	val = val * val % m;
	if (b == 0) 
		return val;
	return val * a % m;
}

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	cout<<multiply(a, b, c);
}