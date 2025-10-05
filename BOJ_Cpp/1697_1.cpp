#include <bits/stdc++.h>
using namespace std;


int arr[100001];

int dx[2] = { -1,1 };
int main() {

	int n, k;

	cin >> n >> k;

	fill(arr, arr + 100001, -1);
	queue<int> Q;
	arr[n] = 0;
	Q.push(n);
	
	
	while (arr[k] == -1) {
		int cur = Q.front();
		Q.pop();

		for (int nxt : {cur - 1, cur + 1, 2 * cur}) {
			if (nxt < 0 || nxt>100000) continue;
			arr[nxt] = arr[cur] + 1;
			Q.push(nxt);
		}
	}

	cout << arr[k];
}