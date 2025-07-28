#include <bits/stdc++.h>
using namespace std;


int main() {

	int n;

	vector<pair<int, int>> v;
	cin >> n;
		int len = n;
	for (int i = 0; i < n; i++) {
		int weight, height;
		cin >> weight >> height;
		v.push_back({ weight,height });
	}


	int rank = 1;
	for (int i = 0; i < n; i++) {
		rank = 1;
		int count = 0;
		for (int j = 0; j < n; j++) {

			if (v[i].first < v[j].first && v[i].second < v[j].second)
				rank++;
		
		}	
		cout << rank << ' ';
	}
		
	
	
	
	/*	for (int i = 0; i < n; i++) {
			cout << arr[i] << ' ';
		}*/
}