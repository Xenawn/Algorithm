#include <bits/stdc++.h>
using namespace std;

int board[102][102];
int vis[102][102];

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int m, n, k;

int main() {

	vector<int> countScore;
	queue<pair<int, int>> Q;
	cin >> m >> n >> k;
	int area = 0;


	for (int i = 0; i < k; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		for (int j = y1; j < y2; j++) {
			fill(board[j] + x1, board[j] + x2, 1);
		}
	}
	

	int count;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			count = 0;
			if (board[i][j] == 1 || vis[i][j] ==1 ) continue;
			vis[i][j] = 1;
			Q.push({ i,j });
			area++; // 영역 시작
			count++; // 첫 지점 count 넣기
			while (!Q.empty()) {

				pair<int, int> cur = Q.front();
				Q.pop();
				
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					if (nx < 0 || nx >= m || ny < 0 || ny >= n) 
						continue;
					if (board[nx][ny] == 1 || vis[nx][ny]) 
						continue;
					vis[nx][ny] = 1;
					Q.push({ nx,ny });
					count++;
				}
			}
			countScore.push_back(count);
		}
		
	}
	cout << area << endl;
	sort(countScore.begin(), countScore.end());


	for (int i = 0; i < countScore.size(); i++) {
		cout << countScore[i] << ' ';
	}
}