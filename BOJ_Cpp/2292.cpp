#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	int tot = 1;
	int multiple = 6;
	int i = 1;
	int cnt = 0;
	cin >> n;

	while (n>tot) {
		tot += multiple * i;
		i++;
		cnt++;
	}


	cout << cnt+1;
}