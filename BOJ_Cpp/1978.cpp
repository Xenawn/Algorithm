#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	int num;
	int count = 0;
	int rest = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		rest = 0;
		for (int i = 1; i <= num; i++) { // 1�� �ڱ� �ڽ����θ� ������������
			if (num % i == 0) rest++;
		}
			
		if (rest == 2) count++;
	}

	cout << count;
}