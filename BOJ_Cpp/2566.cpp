#include <bits/stdc++.h>
using namespace std;

int arr[9][9];
int main() {

	int mx = 0;
	int idxR;
	int idxC;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > mx) {
				mx = arr[i][j];
				idxR = i;
				idxC = j;
			}
		}
	}

	cout << mx << '\n';
	cout << idxR+1 << ' ' << idxC+1;
}