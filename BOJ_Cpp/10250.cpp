#include <bits/stdc++.h>
using namespace std;

int main() {

	int h, w, n;

	int t;

	
	cin >> t;

	for (int i = 0; i < t; i++) {

		cin >> h >> w >> n;
		int rest = n / h ;

		if (n % h == 0) { // ���Լ��� ������ ������ ������ ��
			if (rest < 10) // ȣ �� 
				cout << h << 0 << rest << endl; // �� ���� ����
			else
				cout << h << rest << endl;
		}
		else {
			if (rest + 1 < 10) // 1ȣ ������ ���Լ��� ������ ������ ������ �� �������̴ϱ� ������ �������� �ʴ´ٸ� +1�� ���� 2ȣ���� ����ϵ����Ѵ�.
				cout << n % h << 0 << rest + 1 << endl;
			else
				cout << n % h << rest + 1 << endl;
		}
	}
}