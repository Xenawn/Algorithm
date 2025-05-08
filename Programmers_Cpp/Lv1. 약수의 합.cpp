#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; i++) { // 1부터 자기 자신까지
        if (n % i == 0) {         // 0이면 합산
            answer += i;
        }
    }
    return answer;
}