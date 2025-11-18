#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int main() {

	int n, s;

	cin >> n >> s;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int en = 0;
	int mn = 100000001;
	

	int sum = 0;
	sum += arr[0];
	for (int st = 0; st < n; st++) {
		while (en < n && sum < s) {
			
			en++;
			if(en!=n)sum += arr[en]; 
		}
		if (en == n) break;
		mn = min(en - st + 1,mn);

		sum -= arr[st];
	}

	if (mn == 100000001) {
		mn = 0;
	}
	cout << mn;
}