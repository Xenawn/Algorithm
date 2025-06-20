#include <bits/stdc++.h>
using namespace std;

int board[102][102];
int safe[102][102];

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int main() {

	int n;
	int mx = 0;
	int height =1;
	queue<pair<int, int>>Q;
	vector<int> solution;
	int answer=0;
	int area = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
			mx = max(board[i][j], mx);
		}
	}
	
	while (height<=mx) {
		area = 0; // 기준 높이 상승시 영역 초기화
		for (int i = 0; i < n; i++) {
			fill(safe[i], safe[i] + n, 0); // 기준 높이 상승시 안전 영역 초기화
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] <= height || safe[i][j]) continue;
				safe[i][j] = 1;
				Q.push({ i,j });
				area++;
				
				while (!Q.empty()) {
					pair<int, int> cur = Q.front();
					Q.pop();
					
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];

						if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if (board[nx][ny] <= height || safe[nx][ny]==1) continue;
						safe[nx][ny] = 1;
						Q.push({ nx,ny });
					}
				}
			}
		}
		solution.push_back(area); // 영역 벡터 추가
		height++; // 높이 증가
	}

	for (int i = 0; i <mx; i++) {
		answer = max(solution[i], answer);
	}

	if (answer == 0) cout << 1; // 아무지역도 물에 잠기지 않을 때
	else cout << answer;
	
}
