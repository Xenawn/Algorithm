#include <bits/stdc++.h>
using namespace std;

int arr[10001];
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr[num]++;
	}

	for (int i = 0; i < 10001; i++) { 

		while (arr[i]--) {
			cout << i << '\n';
		}
	}
}