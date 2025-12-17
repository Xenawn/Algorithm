#include <bits/stdc++.h>
using namespace std;

vector<char> op;
vector<int> num;
int main() {


	string str;
	cin >> str;

	string a;
	int num = 0;
	int sum = 0;
	bool minus = false;
	bool first = true;
	for (auto s : str) {

		if (s == '-') {
			num = stoi(a);
			a = "";
			if (first) {
				
				sum += num;
				minus = true;
				a = "";
				first = false;
				//cout <<"µ¡¼À" << sum << endl;
				continue;
			}
			if (!minus) {
				sum += num;
				minus = true;
				continue;
			}
			minus = true;
			
			sum -= num;
			
		}
		else if (s == '+') {
			if (first) {
				num = stoi(a);
				sum += num;
				a = "";
				first = false;
				continue;
			}
			if (minus) {
				num = stoi(a);
				sum -= num;
			}
			else {
				num = stoi(a);
				sum += num;

			}
			a = "";
		}
		else {
			a += s;
		}
	}

	num = stoi(a);
	if (minus && num != 0) {
		sum -= num;
	}
	else if(!minus &&num!=0)
		sum += num;
	
	cout << sum;

}