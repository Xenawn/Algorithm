#include <bits/stdc++.h>
using namespace std;

 // 유기농 배추

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int bat[52][52];
int board[52][52]; // 배추가 있는지 없는지 
int main() {

	int t, m, n, k;
	int x, y;
	cin >> t;

	queue<pair<int, int>> Q;
	for (int i = 0; i < t; i++) {
		cin >> m >> n >> k;
		int count = 0;
		for (int j = 0; j < m; j++) {
			fill(board[j], board[j] + n, 0);
			fill(bat[j], bat[j] + n, 0);
		}

		for (int j = 0; j < k; j++) {

			cin >> x >> y;
			board[x][y] = 1;

		}

		for (int a = 0; a < m; a++) 
		{
			for (int b = 0; b < n; b++) 
			{
				if (board[a][b] == 1 && bat[a][b]==0) { // 여기 주의 조건식 잘 못해서 틀렸음
					Q.push({ a,b }); // 넣을 좌표값이 a,b라는걸 잊지말자
					count++;
				}
				while (!Q.empty()) {
					pair<int, int> cur = Q.front();
					Q.pop();

					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.first + dx[dir]; 
						int ny = cur.second + dy[dir];

						if (nx<0 || nx>m || ny<0 || ny >n) continue;
						if (board[nx][ny] != 1 || bat[nx][ny]) continue;

						bat[nx][ny] = 1;
						Q.push({ nx,ny });

					}
				}

			}
		}
		cout << count << endl;
	}



}
