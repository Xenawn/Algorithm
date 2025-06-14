#include <bits/stdc++.h>
using namespace std;
int dist[302][302];
int dx[8] = {2,1,2,1,-1,-2,-1,-2};
int dy[8] = {1,2,-1,-2,2,1,-2,-1};

int main() {

	int t, x; // 테캐 수, 칸 수
	int s1, s2; // 시작점
	int g1, g2; // 도착점
	
	queue<pair<int, int>> Q;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x;	
		cin >> s1 >> s2;
		cin >> g1 >> g2;
		
		for (int j = 0; j < x; j++) {
			fill(dist[j], dist[j] + x, -1);
		}
		dist[s1][s2] = 0;
		Q.push({ s1,s2 });
		while (!Q.empty()) {

			pair<int, int > cur = Q.front();
			Q.pop();
			
			for (int dir = 0; dir < 8; dir++) {
				int nx = cur.first + dx[dir];
				int ny = cur.second + dy[dir];

				if (nx<0 || nx>=x || ny<0 || ny>=x) continue;
				if ( dist[nx][ny]>-1) continue;

				dist[nx][ny] = dist[cur.first][cur.second] + 1;
				Q.push({ nx,ny });
			}
		}
		
		cout << dist[g1][g2] << endl;
	}
}