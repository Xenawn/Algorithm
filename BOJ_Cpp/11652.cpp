#include <bits/stdc++.h>
using namespace std;

long long arr[100001];
long long solve[100001];
int main() {

	long long n;
	long long cnt = 0;
	long long mxCnt = 0;
	long long mxVal = -(1ll << 62) - 1;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		if (i==0|| arr[i] == arr[i - 1]) {
			cnt++;
		}
		else {
			if (cnt > mxCnt) {
				mxCnt = cnt;
				mxVal = arr[i-1];
			}
				
			cnt = 1;
			
		}
	
	}

	if (cnt > mxCnt) mxVal = arr[n - 1];

	cout << mxVal;
}