#include <bits/stdc++.h>
using namespace std;

vector <int> v;
int main() {

	int n, m;

	
	cin >> n >> m;

	int input;
	int max = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
	}

	// �� ���� ��
	// 5 21
	//5 6 7 8 9
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) { // ���� �� 
			for (int k = j + 1; k < n; k++) { // i���� ���� �� 
				sum = 0; // �ʱ�ȭ
				sum = v[i] + v[j] + v[k]; // ��
				if (sum >= max && sum <=m) { // sum�� max���� ũ�鼭 m���� �۾ƾ���
					max = sum;
				}
			}
		}
	}

	cout << max;
}