#include <bits/stdc++.h>
using namespace std;

vector<int> v[1001];
bool vis[1001];
int cnt = 0;
int n, m;
void bfs() {

	queue<int> Q;
	for (int i = 1; i <= n; i++) {
		if (vis[i]) continue;
		Q.push(i);
		vis[i] = true;
		cnt++;
		while (!Q.empty()) {

			int cur = Q.front();
			Q.pop();

			for (auto nxt : v[cur]) {
				if (vis[nxt]) continue;
				Q.push(nxt);
				vis[nxt] = true;
			}
		}
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m;

	for (int i = 1; i <= m; i++) {
		
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs();
	cout << cnt;
}