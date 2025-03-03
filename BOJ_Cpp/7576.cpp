#include <bits/stdc++.h>
using namespace std;

int board[1002][1002];
int day[1002][1002];

int dx[4] = {1,0,-1,0};
int dy[4] = { 0,1,0,-1 };
int main() {

	int m, n;

	cin >> m >> n;


	queue <pair<int, int>> Q;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 1) 
				Q.push({ i,j });
			if (board[i][j] == 0)
				day[i][j] = -1;
			

			
		}
	}



	while (!Q.empty()) {
		pair <int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			// 익는걸 무시해야하나 언제?
			if (day[nx][ny] >= 0) continue;
			day[nx][ny] = day[cur.first][cur.second] + 1;
			Q.push({ nx,ny });
		}
	}

	int total = 0;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {
			cout << day[i][j] << ' ';
		}
		cout << endl;

	}
	
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (day[i][j] == -1) {
				cout << -1;
				return 0;
			}
			total = max(total, day[i][j]);
		}
		
	}

	cout << total;
}