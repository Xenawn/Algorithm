#include <bits/stdc++.h>
using namespace std;

int heap[100005];
int sz = 0; // heap에 들어있는 원소의 수

void push(int x) {
	heap[++sz] = x;
	int idx = sz;

	while (idx != 1) {
		int pair = idx / 2;
		if (heap[idx] < heap[pair])
			swap(heap[idx], heap[pair]);
		else break;
		idx = pair;
	}
}

int top() {return heap[1];
}

	
void pop() {

	heap[1] = heap[sz--];
	//heap[sz+1] = 0;
	int idx = 1;

	while (2 * idx <= sz) {

		int left = 2 * idx, right = 2 * idx + 1;
		int min_child = left;

		if (right <= sz && heap[right] < heap[left])
			min_child = right;
		if (heap[idx] <= heap[min_child]) break;
		swap(heap[idx], heap[min_child]);
		idx = min_child;
	}


}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int x;
	while (n--) {
		cin >> x;
		if (x == 0) {
			if (sz == 0) cout << 0 << '\n';
			else {
				cout << top() << '\n';
				pop();
			}
		}
		else {
			push(x);
		}

	}
}