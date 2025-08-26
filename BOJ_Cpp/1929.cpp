#include <bits/stdc++.h>
using namespace std;

vector<int> p(int m, int n) {
	vector<int> primes;
	vector<bool> states(1000001,true);
	states[1] = false;
	for (int i = 2; i*i <= n; i++) {
		if (!states[i]) continue;
		for (int j = i * i; j <= n; j += i) {
			states[j] = false;
		}
	}

	for (int i = m; i <= n; i++) {
		
		if(states[i]) primes.push_back(i);
	}


	for (int i = 0; i < primes.size(); i++) {
		cout << primes[i] << '\n';
	}
	return primes;
}

int main() {

	int m, n;
	
	cin >> m >> n;

	p(m, n);


}