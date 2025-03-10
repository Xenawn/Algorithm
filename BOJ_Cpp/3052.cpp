#include <bits/stdc++.h>
using namespace std;

int numArr[42];
int main() {

	
	int num;
	int total = 0;
	

	for (int i = 0; i < 10; i++) {
		cin >> num;
		numArr[num % 42]++;
	}


	for (int i = 0; i < 42; i++) {
		if (numArr[i] >=1)
			total++;
	}

	cout << total;

}