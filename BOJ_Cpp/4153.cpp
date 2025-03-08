#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int a, b, c;

	while (true) {
		cin >> a >> b >> c;

		if (a == 0 && b == 0 &&c == 0)
			break;

		if (a > b && a > c) {
			if (a * a == b * b + c * c) {
				cout << "right" << '\n';
				continue;
			}
			else {
				cout << "wrong" << '\n';
				continue;
			}
		}

		else if (b > a && b > c) {
			if (b * b == a * a + c * c) {
				cout << "right" << '\n';
				continue;
			}
			else {
				cout << "wrong" << '\n';
				continue;
			}
		}

		else if (c > a && c > b) {
			if (c * c == a * a + b * b) {
				cout << "right" << '\n';
				continue;
			}
			else {
				cout << "wrong" << '\n';
				continue;
			}
		}

		else cout << "wrong" << '\n';
	}
}