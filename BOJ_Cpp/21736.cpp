#include <bits/stdc++.h>
using namespace std;

string board[602];
bool vis[602][602];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);


	int n, m;

	cin >> n >> m;

	queue<pair<int, int>>Q;
	for (int i = 0; i < n; i++) 
		cin >> board[i];


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 'I') {
				Q.push({ i,j });
			}
		}
	}
	int cnt = 0;
	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (vis[nx][ny] == 1 || board[nx][ny] == 'X') continue;

			vis[nx][ny] = 1;
			Q.push({ nx,ny });
			if (board[nx][ny] == 'P') cnt++;
		}
	}

	if (cnt == 0) cout << "TT";
	else cout << cnt;
	
}