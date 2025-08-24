#include <bits/stdc++.h>
using namespace std;

int arr[1001];
long long d[1001];

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		d[i] = arr[i];
	}



	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) d[i] = max(d[i], d[j] + arr[i]);
		}
	}




	cout << *max_element(d, d + n + 1);

}