#include <bits/stdc++.h>
using namespace std;

int arr[10];
int main() {

	int a, b, c;
	int total;
	cin >> a >> b >> c;

	total = a * b * c;

	while (total != 0) {
		arr[total % 10]++;
		total /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
}