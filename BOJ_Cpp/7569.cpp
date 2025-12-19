#include <bits/stdc++.h>
using namespace std;

int board[105][105][105];
int day[105][105][105];
int dx[6] = { 0,0,1,0,0,-1 };
int dy[6] = { 0,1,0,0,-1,0 };
int dz[6] = { 1,0,0,-1,0,0 };

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m, n, h;

	cin >> m >> n >> h;

	queue < tuple<int,int,int> > Q;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> board[j][k][i];
					day[j][k][i] = -1;
				if (board[j][k][i] == 1) {
					day[j][k][i] = 0;
					Q.push({ j,k, i });
				}

			}
		}
	}
	


	// 조건문 검사 
	while (!Q.empty()) {
		tuple<int,int,int> cur = Q.front();
		Q.pop();
		int curx, cury, curz;
		tie(curx, cury, curz) = cur;
		for (int dir = 0; dir < 6; dir++) {
			int nx = curx+dx[dir];
			int ny = cury +dy[dir];
			int nz = curz +dz[dir];

			if (nx < 0 || ny < 0 || nz < 0 || nx >= n || ny >= m || nz >= h) continue;
			if (board[nx][ny][nz] !=0) continue;
			if (day[nx][ny][nz] >=0) continue; // day가 0일 이상이면서 board가 -1이면 
			day[nx][ny][nz] = day[curx][cury][curz]+1;
			Q.push({ nx,ny,nz });
		}
	}

	int mx = -1;


	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++){
			for (int k = 0; k < m; k++) {
				if (day[j][k][j] == -1 && board[j][k][i]==0) {
					cout << -1;
					return 0;
				}
				mx = max(mx, day[j][k][i]);
			}
		}
	}

	cout << mx;
}