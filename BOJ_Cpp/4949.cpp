#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;

	bool sv = false;
	
	while (true) {
	
		getline(cin, str);
		if (str.length() == 1 && str[0] == '.') break;
		stack<char> s;
		sv = true;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '[')
			{
				s.push(str[i]);
			}
			else if (str[i] == '(') 
			{
				s.push(str[i]); 
			}
			else if (str[i] == ')') 
			{
				if (s.empty()) {
					sv = false;
					break;
				}
				else {
					if (s.top() == '(') s.pop();
					else {
						sv = false;
						break;
					}
				}
			}
			else if (str[i] == ']') {
				if (s.empty()) {
					sv = false;
					break;
				}
				else {
					if (s.top() == '[') s.pop();
					else {
						sv = false;
						break;
					}
					
				}
			}
		}
		if(!s.empty()) cout << "no" << '\n';
		else {
			if (!sv) cout << "no" << '\n';
			else cout << "yes" << '\n';
		}
	}
}