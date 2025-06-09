#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 1,-1 };
//int dy[4] = { 1,0,-1,0 };
int board[100002];
int dist[100002];
int main() {


	int n, k;
	cin >> n >> k;

	queue<int> Q;

	Q.push(n);

	fill(dist, dist + 100000, -1);
	dist[n] = 0;
	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		for (int nx : {cur - 1, cur + 1, 2 * cur}) {
			if (nx < 0 || nx>100000) continue;
			if (dist[nx] != -1) continue;
			dist[nx] = dist[cur] + 1;
			Q.push(nx);
		}
	}
	cout << dist[k];
}