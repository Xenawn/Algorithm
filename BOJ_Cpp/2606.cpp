#include <bits/stdc++.h>
using namespace std;

vector<int> v[1001];
bool vis[1001];
int cnt = 0;
void bfs(int k) {

	queue<int> Q;
	Q.push(k);
	vis[k] = true;
	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
	
		for (auto nxt : v[cur]) {
			if (vis[nxt]) continue;
			Q.push(nxt);
			vis[nxt] = true;
			cnt++;
		}
	}
}
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	bfs(1);
	cout << cnt;
}