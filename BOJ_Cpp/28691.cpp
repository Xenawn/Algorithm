#include <bits/stdc++.h>
using namespace std;

int main() {

	char m;
	string c;
	cin >> m;

	if (m == 'M')
		cout << "MatKor" << '\n';
	else if (m == 'W')
		cout << "WiCys" << '\n';
	else if (m == 'C')
		cout << "CyKor" << '\n';
	else if (m == 'A')
		cout << "AlKor" << '\n';
	else if (m == '$')
		cout << "$clear" << '\n';
}