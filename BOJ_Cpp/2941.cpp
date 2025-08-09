#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;
	string tmp;
	cin >> str;
	
	int count = 0;
         
	for (int i = 0; i < str.length(); i++) {

		if (str[i] == 'c') {
			if (str[i + 1] == '=') {
				count++;
				i += 1;
				continue;
			}

			if (str[i + 1] == '-') {
				count++;
				i += 1;
				continue;
			}
		}

		if (str[i] == 'd') {
			if (str[i + 1] == 'z') {
				if (str[i + 2] == '=') {
					count++;
					i += 2;
					continue;
				}
			}

			if (str[i + 1] == '-') {
				count++;
				i += 1;
				continue;
			}
		}

		if (str[i] == 'l') {
			if (str[i + 1] == 'j') {
				count++;
				i += 1;
				continue;
			}
		}

		if (str[i] == 'n') {
			if (str[i + 1] == 'j') {
				count++;
				i += 1;
				continue;
			}
		}

		if (str[i] == 's') {
			if (str[i + 1] == '=') {
				count++;
				i += 1;
				continue;
			}
		}

		if (str[i] == 'z') {
			if (str[i + 1] == '=') {
				count++;
				i += 1;

				continue;
			}
		}

		count++;
	}

	cout << count;
}