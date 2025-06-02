#include <bits/stdc++.h>
using namespace std;

int main() {

	int h, w, n;

	int t;

	
	cin >> t;

	for (int i = 0; i < t; i++) {

		cin >> h >> w >> n;
		int rest = n / h ;

		if (n % h == 0) { // 출입수와 층수가 나누어 떨어질 떄
			if (rest < 10) // 호 수 
				cout << h << 0 << rest << endl; // 층 수는 고정
			else
				cout << h << rest << endl;
		}
		else {
			if (rest + 1 < 10) // 1호 라인은 출입수와 층수가 나누어 떨어질 때 점유중이니까 나누어 떨어지지 않는다면 +1을 더해 2호부터 사용하도록한다.
				cout << n % h << 0 << rest + 1 << endl;
			else
				cout << n % h << rest + 1 << endl;
		}
	}
}