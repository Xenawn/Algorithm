#include <bits/stdc++.h>
using namespace std;

string board[26];
int apartment[26][26];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1 ,0};
int main() {

	int n;
	int count = 0; // 총 단지 수
	int house = 0; // 단지내 집의 수 
	queue<pair<int, int>> Q;
	vector<int> houseCount;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}

	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			
			if (board[i][j] == '0' || apartment[i][j]) continue;
			int house = 0; 
			apartment[i][j] = ++house;
			Q.push({ i,j });
			count++;
			while (!Q.empty()) {
				
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
					if (board[nx][ny] == '0' || apartment[nx][ny]) continue;
					apartment[nx][ny] = ++house;
					Q.push({ nx,ny });
				}
			}
			houseCount.push_back(house);
		}
	}
	
	cout << count << endl;
	sort(houseCount.begin(), houseCount.end());

	for (int i = 0; i < count; i++) {
		cout << houseCount[i] << '\n';
	}

}