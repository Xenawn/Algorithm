#include <bits/stdc++.h>
using namespace std;

int main() {

	string arr[3];
	int remember;
	int nextNumber = 0;

	for (int i = 0; i < 3; i++) {

		cin >> arr[i];
		if (arr[i] == "Fizz" || arr[i] == "FizzBuzz" || arr[i] == "Buzz") continue; // 숫자가 아니면 기억할 필요가 없음
		remember = i;
		if (remember == 0) nextNumber = stoi(arr[remember]) + 3; // 첫번째 입력이면 3개의 문자를 입력받을때 4번째 문자에서 3을 더해야 다음 문자 접근
		else if (remember == 1) nextNumber = stoi(arr[remember]) + 2;// 두번째 입력이면 3개의 문자를 입력받을때 4번째 문자에서 2를 더해야 다음 문자 접근
		else if (remember == 2) nextNumber = stoi(arr[remember]) + 1; // 세번째 입력이면 3개의 문자를 입력받을때 4번째 문자에서 1을 더해야 다음 문자 접근
			
	}

	if (nextNumber % 3 == 0 && nextNumber % 5 == 0) {
		cout << "FizzBuzz"; // 3과 5의 배수
	}
	else if (nextNumber % 3 == 0) {
		cout << "Fizz"; // 3의 배수
	}
	else if (nextNumber % 5 == 0) {
		cout << "Buzz"; // 5의 배수
	}
	else {
		cout << nextNumber; // 그 외 자기 자신 출력
	}

}