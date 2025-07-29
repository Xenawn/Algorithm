#include <bits/stdc++.h>
using namespace std;
int arr[5] = { 1,7,3,6,9 };
int Mx(int arr[],int len) {
	cout << "È£Ãâ" << endl;
	if (len == 0) return arr[len];
	int num = Mx(arr, len - 1);
	cout << num << ", " << arr[len]<<'\n';
	if (num < arr[len]) {  return arr[len];
	}
	else
		return num;

}
int main() {

	int n;
	cin >> n;
	cout<<Mx(arr, 4);
}