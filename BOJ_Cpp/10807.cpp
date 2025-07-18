#include <bits/stdc++.h>
using namespace std;
int arr[101];
int main() {

	int n;
	int cmp;
	int count = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> cmp;
	for (int i = 0; i < n; i++) {
		if (arr[i] == cmp) count++;
	}
	cout << count;
}