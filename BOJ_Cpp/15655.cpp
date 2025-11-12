#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10001];
int brr[10001];
bool isUsed[10];
void func(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << brr[arr[i]] << ' ';
			
		}
		
		cout << '\n';
		return;
	}

	int st = 1;
	if (st != 0)st = arr[k - 1] + 1;
	
	for (int i = st; i <= n; i++) {
		
	
		arr[k] = i;
		func(k + 1);
		
		
	}
}
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> brr[i];
	}

	sort(brr+1, brr + n+1);

	func(0);

}