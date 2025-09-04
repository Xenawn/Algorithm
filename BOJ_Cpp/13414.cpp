#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	unordered_map<string,int> s; // ��ȣ �� ����
	vector<pair<int,string>> v; // ���� , ��ȣ;

	int k, l;

	cin >> k >> l;

	for (int i = 0; i < l; i++) {
		
		string num;
		cin >> num;
		
		s[num] = i; // �ߺ��Ǹ� ������ ��ȣ ����
	}

	for (auto a : s) {
		v.push_back({ a.second,a.first});
	}

	sort(v.begin(), v.end());

	int size = v.size();
	for (int i = 0; i < k; i++) {
		if (i == size) break; // ���� ����� k���� ���� ��� 
		cout << v[i].second << '\n';
	}
}