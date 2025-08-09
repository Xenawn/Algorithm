#include <bits/stdc++.h>
using namespace std;


int main() {
	vector<string> v = { "c=","c-","dz=","d-","lj","nj","s=","sz","z="};
	string str;
	int idx;
	cin >> str;
	for (int i = 0; i < v.size(); i++) {
		while (1) {
			idx = str.find(v[i]);
			if (idx == string::npos) break;
			str.replace(idx, v[i].length(),"*");
		}
	}

	cout << str.length();
}