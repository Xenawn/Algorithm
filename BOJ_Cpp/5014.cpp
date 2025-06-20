#include <bits/stdc++.h>
using namespace std;

int dist[1000002];
int main() {

	int f, s, g, u, d;
	queue<int> Q;
	cin >> f >> s >> g >> u >> d;

	fill(dist, dist + 1000002, -1);
	dist[s] = 0;
	Q.push(s);
	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		for (int nx : {cur + u, cur - d}) {
			if (nx < 0 || nx >= 1000000) continue;

			if (dist[nx]<=0) continue;

			dist[nx] = dist[cur] + 1;
			Q.push({ nx });
		}
	}


	if (dist[g] == -1 || (f<u||f<d||f<s||f<g))
		cout << "use the stairs";
	else
		cout << dist[g];
}