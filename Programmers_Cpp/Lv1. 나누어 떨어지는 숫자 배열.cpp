#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % divisor == 0) {
            answer.push_back(arr[i]);
            count++;
        }

    }

    sort(answer.begin(), answer.end());
    return answer.empty()? vector<int>(1,-1):answer;
}