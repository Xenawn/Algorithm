#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, k;
	vector<int> scoreList;
	int score;
	cin >> n >> k;
	

	while (n--) {
		cin >> score;
		scoreList.push_back(score);
	}
	sort(scoreList.begin(), scoreList.end(),greater<>());
	cout << scoreList[k-1];
}