#include <bits/stdc++.h>
using namespace std;

vector <int> v;
int main() {

	int n, m;

	
	cin >> n >> m;

	int input;
	int max = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
	}

	// 세 수의 합
	// 5 21
	//5 6 7 8 9
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) { // 다음 수 
			for (int k = j + 1; k < n; k++) { // i보다 다음 수 
				sum = 0; // 초기화
				sum = v[i] + v[j] + v[k]; // 합
				if (sum >= max && sum <=m) { // sum이 max보다 크면서 m보다 작아야함
					max = sum;
				}
			}
		}
	}

	cout << max;
}