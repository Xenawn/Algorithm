#include <bits/stdc++.h>
using namespace std;

int arr[101];
int brr[101];

void quick_sort(int st, int en) {
	if (en <= st + 1) return;
	int pivot = arr[st];
	int l = st + 1;
	int r = en - 1;

	while (1) {

		while (l <= r && arr[l] <= pivot) l++;
		while (l <= r && arr[r] >= pivot) r++;
		if (l < r) break;
		swap(arr[l], arr[r]);
	
	}
	swap(arr[st], arr[r]);
	quick_sort(st, r);
	quick_sort(r + 1, en);
}
int main() {

	
	ios::sync_with_stdio(0);
	cin.tie(0);
	quick_sort(0, n);

}