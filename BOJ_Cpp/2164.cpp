#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	int i = 0;
	queue<int> Q;

	cin >> n;

	
	
	for (int i = 1; i <=n; i++) {
		Q.push(i);
	}

	// ¦,Ȧ ¦�� count�� pop�� Ȧ�� count�� front���� back���� �ű�
	// pop�� front���� push�� ���ʿ���
	
	while(Q.size()!=1){
		if (i % 2 == 0)
			Q.pop();
		else
		{
			int num = Q.front(); // pop�� ���� ���� ���� �ű�
			Q.pop();
			Q.push(num);

		}
		i++;
	}



	cout << Q.front();
}