#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int n, m;

int binarySearch(int k) {

	int st = 0; 
	int en = n - 1;

	while (st <= en) {
		int mid = (st + en) / 2;

		if (k > arr[mid]) {
			st = mid + 1;
		
		}
		else if (k < arr[mid]) {
			en = mid - 1;
			
		}
		else {
			return 1;
		}
	
	}
	return 0;
}
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;

	for (int i = 0; i < n; i++){
		
		cin >> arr[i];	
	}

	sort(arr, arr + n);

	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		cout<<binary_search(arr,arr+n,num)<<'\n';
	}
}