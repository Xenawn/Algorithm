#include <bits/stdc++.h>
using namespace std;

int arr[12];
int main() {

	int t;
	int num;
	cin >> t;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 0; i < t; i++) {
		
		cin >> num;
		for (int j = 4; j <= num; j++) {
			arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];
		}
		
		cout << arr[num] << '\n';
	}

}