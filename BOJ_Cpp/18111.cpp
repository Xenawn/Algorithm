#include <bits/stdc++.h>
using namespace std;

int board[502][502];
int comp[502];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, b;
	cin >> n >> m >> b;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
			comp[board[i][j]]++;
		}
	}

	int time;
	int min_time = 1e9;	
	int minh;
	for (int i = 0; i <= 256; i++) {
		int inven = 0;
		int rm = 0;
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {

				if (board[j][k] > i) {
					rm += board[j][k] - i;
				}
				else if (board[j][k] == i)
					continue;
				else{
					inven += i - board[j][k];
				}
			}
		}

		if (rm + b >= inven) {
			time = 2 * rm + inven;
			if (time <= min_time) {
				min_time = time;
				minh = i;
			}
		}
	}

	cout << min_time <<' '<< minh;
}