#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; i++) { // 1���� �ڱ� �ڽű���
        if (n % i == 0) {         // 0�̸� �ջ�
            answer += i;
        }
    }
    return answer;
}