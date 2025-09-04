#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	unordered_map<string,int> s; // 번호 ㅡ 순서
	vector<pair<int,string>> v; // 순서 , 번호;

	int k, l;

	cin >> k >> l;

	for (int i = 0; i < l; i++) {
		
		string num;
		cin >> num;
		
		s[num] = i; // 중복되면 마지막 번호 삽입
	}

	for (auto a : s) {
		v.push_back({ a.second,a.first});
	}

	sort(v.begin(), v.end());

	int size = v.size();
	for (int i = 0; i < k; i++) {
		if (i == size) break; // 벡터 사이즈가 k보다 작을 경우 
		cout << v[i].second << '\n';
	}
}