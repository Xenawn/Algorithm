#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a;
	vector <int> v;


	
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	int max= v[0],min = v[0];
	for (int i = 0; i < n; i++) {

		if (v[i] >= max)
			max = v[i];
		if (v[i] <= min)
			min = v[i];

	}

	cout << min << ' ' << max;
}