#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int min = 100,sum = 0;
	int check;
	
	for (int i = 0; i < 7; i++) {
		cin >> n;
		if (n % 2 == 1) {
			sum += n;
			if (n <= min)
				min = n;

		}
	}

	if (sum == 0) {
		cout << -1;
		return 0;
	}
	cout << sum << endl;
	cout << min;
}