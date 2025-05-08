#include <bits/stdc++.h>
using namespace std;

string board[1001];
int distFire[1001][1001];
int distJihun[1001][1001];

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {

	int r, c;
	int mx1 = 0, mx2 = 0;
	queue<pair<int, int>> Q1;
	queue<pair<int, int>> Q2;
	cin >> r >> c;

	for (int i = 0; i < r; i++) {

		cin >> board[i];

	}
	int count = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			distFire[i][j] = -1;
			distJihun[i][j] = -1;
		}
	}
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (board[i][j] == 'F') {
				Q1.push({ i,j });
				distFire[i][j] = 0;
			}
			if (board[i][j] == 'J') {
				Q2.push({ i,j });
				distJihun[i][j] = 0;
			}
		}
	}
	
	while (!Q1.empty()) { // 불에 대한 BFS
		pair<int, int> cur = Q1.front();
		Q1.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
			if (board[nx][ny] == '#' || distFire[nx][ny] >=0) continue;

			distFire[nx][ny] = distFire[cur.first][cur.second] + 1;
			Q1.push({ nx,ny });

		}
	}


	while (!Q2.empty()) { // 지훈 bFS
		pair<int, int> cur = Q2.front();
		Q2.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
			
				cout << distJihun[cur.first][cur.second] + 1;
				return 0;
			}
			if (distJihun[nx][ny] >=0 ||board[nx][ny] == '#' ) continue;

			if (distFire[nx][ny]!=-1 && distJihun[cur.first][cur.second] + 1>= distFire[nx][ny]) continue;
			distJihun[nx][ny] = distJihun[cur.first][cur.second] + 1;
			Q2.push({ nx,ny });

		}
		
	}

	cout << "IMPOSSIBLE";
}