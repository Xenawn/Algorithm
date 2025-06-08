#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 1,-1 };
//int dy[4] = { 1,0,-1,0 };
int board[100002];
int dist[100001];
int main() {

	int n, k;
	queue <int>  Q;

	cin >> n >> k;
	Q.push(n);
	fill(dist, dist + 100001, -1);
	dist[n] = 0;
	while (!Q.empty()) {
		int cur = Q.front(); Q.pop();
		for (int nxt: {cur-1,cur+1,2*cur}) {
			if (nxt < 0 || nxt>100000) continue;
			if (dist[nxt] !=-1) continue;
			dist[nxt] = dist[cur]+1;
			Q.push(nxt);
			
		}
	}
	cout << dist[k];
}