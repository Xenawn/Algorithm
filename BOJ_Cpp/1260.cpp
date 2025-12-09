#include <bits/stdc++.h>
using namespace std;

vector<int> s[1001];
bool vis[1001];
int n, m, v;
void dfs(int k) {
	
	for (int i = 1; i <= n; i++) {
		sort(s[i].begin(), s[i].end(),greater<int>());
	}
	fill(vis, vis + 1001, 0);
	stack<int> St;
	St.push(k);
	
	while (!St.empty()) {
		int cur = St.top();
		St.pop();
		if (vis[cur]) continue;
		vis[cur] = true;
		cout << cur << ' ';
		for (auto nxt : s[cur]) {
			if (vis[nxt]) continue;
			St.push(nxt);
			
		}
	}
	cout << '\n';
}
void bfs(int k) {
	for (int i = 1; i <= n; i++) {
		sort(s[i].begin(), s[i].end());
	}
	fill(vis, vis + 1001, 0);
	queue<int> Q;
	Q.push(k);
	vis[k] = 1;
	
	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		cout << cur << ' ';

		for (auto nxt : s[cur]) {
			
			if (vis[nxt]) continue;
			Q.push(nxt);
			vis[nxt] = true;
		}
	}
	cout << '\n';
}
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	

	cin >> n >> m >> v;

	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;

		s[a].push_back(b);
		s[b].push_back(a);
	}


	dfs(v);
	bfs(v);

}