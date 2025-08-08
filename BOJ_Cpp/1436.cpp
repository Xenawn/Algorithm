#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int index = 665;

    string str;


    while (++index) {
        str = to_string(index);

        if (str.find("666") != string::npos) {
            count++;
        }

        if (count == n) {
            cout << index;
            return 0;
        }
    }
}