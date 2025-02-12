#include <bits/stdc++.h>
using namespace std;

bool Comapare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}
int main() {

	string str;
	vector <string> v;

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		v.push_back(str);
	}


	sort(v.begin(), v.end(), Comapare); // sort 사용법 익히기

	v.erase(unique(v.begin(), v.end()), v.end());


	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

}