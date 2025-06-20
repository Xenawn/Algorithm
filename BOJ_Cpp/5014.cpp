#include <bits/stdc++.h>
using namespace std;

int dist[1000002];
int main() {

	int f, s, g, u, d;
	queue<int> Q;
	cin >> f >> s >> g >> u >> d;

	fill(dist, dist + f+1, -1);
	dist[s] = 0;
	Q.push(s);
	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		for (int nx : {cur + u, cur - d}) {
			if (nx <= 0 || nx >f) continue;

			if (dist[nx]!=-1) continue;

			dist[nx] = dist[cur] + 1;
			Q.push({ nx });
		}
	}


	if (dist[g] == -1)
		cout << "use the stairs";
	else
		cout << dist[g];
}