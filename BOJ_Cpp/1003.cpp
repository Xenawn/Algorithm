#include <bits/stdc++.h>
using namespace std;

int z[42]; // 0 È½¼ö
int o[42]; // 1 È½¼ö

int main() {

	int t;

	cin >> t;
	
	for (int i = 0; i < t; i++) {
		int num;
		cin >> num;
		z[0] = 1;
		o[0] = 0;
		z[1] = 0;
		o[1] = 1;
		if (num == 0 || num == 1) {
			cout << z[num] << ' ' << o[num] << '\n';
			continue;
		}
		for (int j = 2; j <= num; j++) {
			
			z[j] = z[j - 1] + z[j - 2];
			o[j] = o[j - 1] + o[j - 2];
		}
		cout << z[num] << ' ' << o[num] << '\n';
		fill(o, o+ 42, 0);
		fill(z, z + 42, 0);
	}

}