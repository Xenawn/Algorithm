#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {

	if (b == 0) return a;
	return gcd(b, a%b);
}
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c, d;

	cin >> a >> b >> c >> d; // 2 7 // 3 5

	int son = a * d + b * c; // 4 8 // 6 12
	int mom = b * d;

	int g = gcd(son, mom);
	
	cout << son/g << " " << mom / g;
	
}