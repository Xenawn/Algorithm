#include <bits/stdc++.h>
using namespace std;




int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	if (sum == 180 && a == 60 && b == 60 && c == 60)
		cout << "Equilateral" << endl;
	else if (sum == 180 && (a == b || a == c || b == c))
		cout << "Isosceles" << endl;
	else if (sum == 180)
		cout << "Scalene" << endl;
	else
		cout << "Error";
		
}