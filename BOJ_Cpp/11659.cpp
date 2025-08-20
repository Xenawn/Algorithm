#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int d[100001];
int main() {

<<<<<<< HEAD
	ios::sync_with_stdio(0);
	cin.tie(0);
=======
>>>>>>> 356ba251651988cbd6cb44f4f1077c37cfa6159f
	int n;
	int m;
	cin >> n>>m;
	
	for (int i = 1; i <= n; i++) {

		cin >> arr[i];
<<<<<<< HEAD
=======
	}

	for (int i = 1; i <= n; i++) {
>>>>>>> 356ba251651988cbd6cb44f4f1077c37cfa6159f
		d[i] = d[i - 1] + arr[i];
	}

	int a, b;
<<<<<<< HEAD
=======
	d[1] = arr[1];
>>>>>>> 356ba251651988cbd6cb44f4f1077c37cfa6159f
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		cout << d[b] - d[a-1]<<'\n';
	}
}