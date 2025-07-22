#include <bits/stdc++.h>
using namespace std;

bool arr[29];
int trr[29];

int main() {

	int min=30;
	int second;
	for (int i = 1; i <= 28; i++) {
		int num;
		cin >> num;
		arr[num] = 1;
	}
	
	for (int i = 1; i <= 30; i++) {
		if (arr[i] == 0) {
			if (min > i) {
				min = i;
			}
		}
			
	}

	cout << min << endl;
	for (int i = min+1; i <=30; i++) {
		if (arr[i] == 0) {
			second = i; break;
		}
	}
	cout << second << endl;
}