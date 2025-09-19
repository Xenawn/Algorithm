#include <bits/stdc++.h>
using namespace std;

string board[101];
string board2[101];
int vis[101][101];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> board[i];
		board2[i] = board[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 'R' || board[i][j] == 'G')
				board2[i][j] = 'A';
			
		}
	}

	queue<pair<int, int>> Q;

	int count = 0;

	// 일반
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (vis[i][j] == 1) continue;
			vis[i][j] = 1;
			Q.push({ i,j });
			count++;
			while (!Q.empty()) {

				pair<int, int> cur = Q.front();
				Q.pop();
				
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
					if (vis[nx][ny] || (board[cur.first][cur.second] != board[nx][ny])) continue;

					vis[nx][ny] = 1;
					Q.push({ nx,ny });
				}
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		fill(vis[i], vis[i] + n, 0);
	}

	queue<pair<int, int>> Q2; // 적록 색맹
	int count2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (vis[i][j] == 1) continue;
			vis[i][j] = 1;
			Q2.push({ i,j });
			count2++;
			while (!Q2.empty()) {

				pair<int, int> cur = Q2.front();
				Q2.pop();

				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
					if (vis[nx][ny]) continue;
					if (vis[nx][ny] || (board2[cur.first][cur.second] != board2[nx][ny])) continue;

					vis[nx][ny] = 1;
					Q2.push({ nx,ny });
				}
			}
		}
	}
	cout << count<<' '<<count2;

}