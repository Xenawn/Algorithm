#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int brr[100001];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int m;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	cin >> m;

	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		int l = 0;
		int r = n-1;


		while (l <= r) {
			int mid = (l + r) / 2;
			if (arr[mid] == num) {
				brr[i] = 1;
				break;
			}
			else if (num > arr[mid]) {
				l = mid + 1;
			}
			else if (num < arr[mid]) {
				r = mid - 1;
			}
		}
		cout << brr[i] << '\n';


	}

}