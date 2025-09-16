#include <bits/stdc++.h>
using namespace std;

int main() {

	long long a, b, v;

	cin >> a >> b >> v;

	long long count = 0;
	
	count = (v - a) / (a-b);
	if ((v - a) % (a-b) == 0) count += 1;
	else count += 2;
	cout << count;
}
