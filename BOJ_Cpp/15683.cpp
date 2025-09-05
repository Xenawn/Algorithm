#include <bits/stdc++.h>
using namespace std;
int n, m;

int arr[100][100];

int RightFirst(int i, int j) {

	int count = 0;
	j++;
	while (j < m) {
		if (arr[i][j] == 6 || (arr[i][j] != 8 && arr[i][j] != 0))
			break;
		count++;
		j++;

	}

	return count;
}
int LeftFirst(int i, int j) {

	int count = 0;
	j--;
	while (j >=0) {
		if (arr[i][j] == 6 || (arr[i][j]!=8&&arr[i][j] != 0))
			break;
		count++;
		j--;

	}

	return count;
}

int DownFirst(int i, int j) {

	int count = 0; 
	i++;
	while (i < n) {
		if (arr[i][j] == 6 || (arr[i][j] != 8 && arr[i][j] != 0))
			break;
		
		count++;
		i++;
	}
	return count;
}
int UpFirst(int i, int j) {

	int count = 0; 
	i--;
	while (i >= 0) {
		if (arr[i][j] == 6 || (arr[i][j] != 8 && arr[i][j] != 0))
			break;
		
		count++;
		i--;
	}
	return count;
}

void UP8(int i,int  j) {
	int a = i;
	int b = j;
	a--;
	while (a >= 0) {
		if (arr[a][b] == 6 || (arr[a][b]!=0&&arr[a][b]!=8))
			break;
		arr[a--][b] = 8;
	}
}

void DOWN8(int i, int j) {
	int a = i;
	int b = j;
	a++;
	while (a < n) {
		if (arr[a][b] == 6 || (arr[a][b] != 0 && arr[a][b] != 8))
			break;

		arr[a++][b] = 8;
	}
}

void LEFT8(int i, int j) {
	int a = i;
	int b = j;
	b--;
	while (b >= 0) {
		if (arr[a][b] == 6 || (arr[a][b] != 0 && arr[a][b] != 8))
			break;

		arr[a][b--] = 8;

	}
}

void RIGHT8(int i, int j) {
	int a = i;
	int b = j;
	b++;
	while (b < m) {
		if (arr[a][b] == 6 || (arr[a][b] != 0 && arr[a][b] != 8))
			break;
		arr[a][b++] = 8;

	}
}
int UDSecond(int i, int j) {
	int count = 0;
	count = UpFirst(i, j) + DownFirst(i, j);
	return count;
}

int LRSecond(int i, int j) {

	int count = 0;
	count = LeftFirst(i, j) + RightFirst(i, j);
	return count;
}

int URThird(int i, int j) {
	int count = 0;
	count = UpFirst(i, j) + RightFirst(i, j);
	return count;
}

int RDThird(int i, int j) {
	int count = 0; 
	count = RightFirst(i, j) + DownFirst(i, j);
	return count;
}

int DLThird(int i, int j) {
	int count = 0;
	count = DownFirst(i, j) + LeftFirst(i, j);
	return count;
}

int LUThird(int i, int j) {
	int count = 0;
	count = LeftFirst(i, j) + UpFirst(i, j);
	return count;
}

int LURFourth(int i, int j) {
	int count = 0;
	count = LeftFirst(i, j) + UpFirst(i, j) + RightFirst(i, j);
	return count;
}

int URDFourth(int i, int j) {
	int count = 0;
	count = UpFirst(i, j) + RightFirst(i, j)+ DownFirst(i, j);
	return count;
}

int RDLFourth(int i, int j) {
	int count = 0;
	count = RightFirst(i, j) + DownFirst(i, j)+LeftFirst(i,j);
	return count;
}

int DLUFourth(int i, int j) {
	int count = 0;
	count = DownFirst(i, j) + LeftFirst(i, j) +UpFirst(i, j);
	return count;
}
int main() {


	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {
			int index = -1;
			if (arr[i][j] == 1) {
			
				int brr[4] = { UpFirst(i,j), DownFirst(i,j), RightFirst(i,j),LeftFirst(i,j) };
				int mx = 0;

				for (int k = 0; k < 4; k++) {
					if (brr[k] > mx) {
						mx = brr[k];
						index = k;
					}
				}
				
				if (index == 0) {
					UP8(i,j);
				}
				else if (index == 1) {
					DOWN8 (i, j);
				}
				else if (index == 2) {
					RIGHT8(i, j);
				}
				else if (index == 3) {
					LEFT8(i, j);
				}
			}

			if (arr[i][j] == 2) {
				int mx = 0;
				int brr[2] = { LRSecond(i,j),UDSecond(i,j) };
				for (int k = 0; k< 2; k++) {
					if (brr[k] > mx) {
						mx = brr[k];
						index = k;
					}
				}

				if (index == 0) {
					LEFT8(i, j);
					RIGHT8(i, j);
				}
				else if (index == 1) {
					UP8(i, j);
					DOWN8(i, j);
				}
			}

			if (arr[i][j] == 3) {

				int mx = 0;
				int brr[4] = { URThird(i,j),RDThird(i,j),DLThird(i,j),LUThird(i,j) };

				for (int k = 0; k < 4; k++) {
					if (brr[k] > mx) {
						mx = brr[k];
						index = k;
					}
				}

				if (index == 0) {
					UP8(i, j);
					RIGHT8(i, j);
				}
				else if (index == 1) {
					RIGHT8(i, j);
					DOWN8(i, j);
				}
				else if (index == 2) {
					DOWN8(i, j);
					LEFT8(i, j);
				}
				else if (index == 3) {
					LEFT8(i, j);
					UP8(i, j);
				}
			}

			if (arr[i][j] == 4) {
				int mx = 0; 
				int brr[4] = {LURFourth(i,j),URDFourth(i,j),RDLFourth(i,j),DLUFourth(i,j)};

				for (int k = 0; k < 4; k++) {
					if (brr[k] > mx) {
						mx = brr[k];
						index = k;
					}
				}

				if (index == 0) {
					LEFT8(i, j);
					UP8(i, j);
					RIGHT8(i, j);
				}
				else if (index == 1) {
					UP8(i, j);
					RIGHT8(i, j);
					DOWN8(i, j);
				}
				else if (index == 2) {
					RIGHT8(i, j);
					DOWN8(i, j);
					LEFT8(i, j);
				}
				else if (index == 3) {
					DOWN8(i, j);
					LEFT8(i, j);
					UP8(i, j);
				}
			}

			if (arr[i][j] == 5) {
				RIGHT8(i, j);
				DOWN8(i, j);
				LEFT8(i, j);
				UP8(i, j);
			}
		}


	}

	int solve = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}

	cout << solve;
}
