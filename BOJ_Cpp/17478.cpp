#include <bits/stdc++.h>
using namespace std;

int a;
string hypen(int n) {
	string underbar;
	while(n < a) {
		underbar += "____";
		n++;
	}
	return underbar;
}
void recursion(int n) {

	cout << hypen(n) << "\"����Լ��� ������?\"\n";

	if (n == 0) { // base case
		cout << hypen(n) << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		cout << hypen(n) << "��� �亯�Ͽ���.\n";
		return;
	}
	cout << hypen(n) << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
	cout << hypen(n)<<"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
	cout << hypen(n)<<"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

	recursion(n - 1);
	
	cout << hypen(n) << "��� �亯�Ͽ���.\n";
}
int main() {
	int n;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	a = n;
	cout  << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recursion(n);
}