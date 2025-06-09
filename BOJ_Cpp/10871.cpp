#include <bits/stdc++.h>
using namespace std;

int arr[10001];
int bigArr[100001];
int main() {

	int n, x;
	cin >> n >> x;
	int j = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < x) {
			bigArr[j] = arr[i];
			j++;
		}
	}

	int k = 0;
	while (bigArr[k] != 0) {
		cout << bigArr[k] << ' ';
		k++;
	}

}