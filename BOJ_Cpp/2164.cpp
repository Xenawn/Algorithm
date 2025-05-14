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

	// Â¦,È¦ Â¦¼ö count´Â pop¸¸ È¦¼ö count´Â front¿¡¼­ backÀ¸·Î ¿Å±è
	// popÀº front¿¡¼­ push´Â µÚÂÊ¿¡¼­
	
	while(Q.size()!=1){
		if (i % 2 == 0)
			Q.pop();
		else
		{
			int num = Q.front(); // popÈù ¼ö¸¦ Á¦ÀÏ À§·Î ¿Å±è
			Q.pop();
			Q.push(num);

		}
		i++;
	}



	cout << Q.front();
}