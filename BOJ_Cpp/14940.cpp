#include <bits/stdc++.h>
using namespace std;

int arr[1001][1001];
int dist[1001][1001];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int main() {

	int n, m;

	cin >> n >> m;
	int num;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		fill(dist[i], dist[i] + m, -1);
	}
	queue<pair<int,int>> Q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 2) {
				dist[i][j] = 0;
				Q.push({ i,j });
				break;
			}
		}
	}
	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (arr[nx][ny] == 0 || dist[nx][ny] != -1) continue;
			
			Q.push({ nx,ny });
			dist[nx][ny] = dist[cur.first][cur.second] + 1;

		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0 && dist[i][j] == -1)
				cout << 0 << ' ';
			else
				cout << dist[i][j] << ' ';
		}
		cout << '\n';
	}

}