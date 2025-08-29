#include <bits/stdc++.h>
using namespace std;

int main() {

	int a, b, c, d;

	cin >> a >> b >> c >> d;

	int h = a + c;
	int y = b + d;

	if (h < y) cout << "Hanyang Univ.";
	else if (h > y) cout << "Yongdap";
	else cout << "Either";
}