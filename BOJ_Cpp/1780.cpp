#include <bits/stdc++.h>
using namespace std;

int arr[2200][2200];
int cnt[3];
bool compare(int a, int b, int n) {

	for (int i = a; i < a+n; i++) {
		for (int j = b; j <b+ n; j++) {
			if(arr[i][j]!=arr[a][b])
			return false;
		}
	}
	return true;
}
void func(int a, int b, int n) {

	
	if (compare(a,b,n)){
		cnt[arr[a][b]+1] += 1;
		return;
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			
			
				func(a+i*n, b+i*n, n / 3);
			
		}
	}
	

	
}
int main() {

	int n;
	int count = 0;
	cin >> n;
	


	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	func(0, 0, n);

	for (int i = 0; i < 3; i++) {
		cout << cnt[i] << endl;
	}
}