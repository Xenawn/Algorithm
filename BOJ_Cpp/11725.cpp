#include <bits/stdc++.h>
using namespace std;

int n;
int p[100005];
vector<int> v[100005];


void bfs(int k) {

	queue<int> Q;
	Q.push(k);

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		for (auto nxt : v[cur]) {
			if (p[cur] == nxt) continue;
			Q.push(nxt);
			p[nxt] = cur;
			
		}
	}
}
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	
	for (int i = 0; i < n-1; i++) {
		int a, b;

		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}


	bfs(1);
	for (int i = 2; i <= n; i++) {
		cout << p[i] << '\n';
	}
	
}