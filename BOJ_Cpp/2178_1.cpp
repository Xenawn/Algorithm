#include <bits/stdc++.h>
using namespace std;

string board[1001];
int vis[1001][1001];
int J[1001][1001];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int main() {

	int r, c;
	queue<pair<int, int>> Q2;
	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		cin >> board[i];
	}

	for (int i = 0; i < r; i++) {
		fill(vis[i], vis[i] + c, -1);
		fill(J[i], J[i] + c, -1);
	}
	queue<pair<int, int>> Q;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (board[i][j] == 'F')
			{
				vis[i][j] = 0;
				Q.push({ i,j });
			}
			if (board[i][j] == 'J')
			{
				J[i][j] = 0;
				Q2.push({ i,j });
			}

		}
	}

	while (!Q.empty()) {

		pair<int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
			if (board[nx][ny] == '#' || vis[nx][ny] > 0) continue;

			vis[nx][ny] = vis[cur.first][cur.second] + 1;
			Q.push({ nx,ny });
			
		}
	}


	while (!Q2.empty()) {

		pair<int, int> cur = Q2.front();
		Q2.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
				cout << J[cur.first][cur.second]+1;
				return 0;
			}
			if (board[nx][ny] == '#' || J[nx][ny] > 0) 	continue;
			if (vis[nx][ny] != -1 && vis[nx][ny] <= J[cur.first][cur.second] + 1) continue;
				
			J[nx][ny] = J[cur.first][cur.second] + 1;
			Q2.push({ nx,ny });

		}
	}



	cout << "IMPOSSIBLE";
}