#include <bits/stdc++.h>
using namespace std;

int board[1002][1002];
int rip[1002][1002];

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {

	int m, n;
	int mx = 0;
	
	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}


	queue <pair<int, int>> Q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j]==1) {
				Q.push({ i,j });
				
			}
		}
	}

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			
			if (board[nx][ny] != 0 || rip[nx][ny] != 0) continue;
		
			rip[nx][ny] = rip[cur.first][cur.second] + 1;
			Q.push({ nx,ny });
			mx = max(rip[nx][ny], mx);
		}

	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (rip[i][j] == 0 && board[i][j] == 0) {
				cout << -1;
				return 0;
			}
		}
	}

	cout << mx;
}