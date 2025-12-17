#include <bits/stdc++.h>
using namespace std;

const int MX = 100;
const int INF = 0x7f7f7f7f;
vector<int> v[MX+2];
int dist[MX+2];


int mn = INF, ans;
int bfs(int k) {
	int sum = 0;
	queue<int> Q;
	dist[k] = 0;
	Q.push(k);

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		for (auto nxt : v[cur]) {

			if (dist[nxt]!= -1) continue;
			Q.push(nxt);
			dist[nxt] = dist[cur] + 1;
			sum += dist[nxt];
			
		}

	}
	return sum;
}
int main() {

	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < m; i++) {

		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}



	int ans = 0;
	for (int i = 1; i <= n; i++) {
		fill(dist, dist + n+1, -1);
		int tot = bfs(i);
		
		if (tot < mn) {
			mn = tot;
			ans = i;
		}
		
	}
	cout << ans;
}