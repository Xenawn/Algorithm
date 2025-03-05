#include <bits/stdc++.h>
using namespace std;

int main() {

	int i;


	string arr[3];
	int remember;
	int nextNumber = 0;

	for (int i = 0; i < 3; i++) {

		cin >> arr[i];
		if (arr[i] == "Fizz" || arr[i] == "FizzBuzz" || arr[i] == "Buzz") continue;
		remember = i;
		if (remember == 0) nextNumber = stoi(arr[remember]) + 3;
		else if (remember == 1) nextNumber = stoi(arr[remember]) + 2;
		else if (remember == 2) nextNumber = stoi(arr[remember]) + 1;
			
	}

	if (nextNumber % 3 == 0 && nextNumber % 5 == 0) {
		cout << "FizzBuzz";
	}
	else if (nextNumber % 3 == 0) {
		cout << "Fizz";
	}
	else if (nextNumber % 5 == 0) {
		cout << "Buzz";
	}
	else {
		cout << nextNumber;
	}

}