	#include <iostream>
	#include <list>
	using namespace std;
	int main() {

		int n;
		cin >> n;

		for (int i = 0; i < n; i++) {
			list<char> l;
			list<char>::iterator it;
			string str;
			cin >> str;
			it = l.begin();
			for (auto a : str) {
				if (a == '<') {
					if(it!=l.begin())
						it--;
				}
				else if (a == '>') {
					if (it!=l.end())
						it++;
				}
				else if (a == '-') {
					if (it != l.begin()) {
						it--;
						it = l.erase(it);
					}
				}
				else {
					l.insert(it, a);
				}
			}
			for (auto a : l) {
				cout << a;
			}
			cout << '\n';
		}

	
	}