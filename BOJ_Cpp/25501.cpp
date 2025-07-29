#include <bits/stdc++.h>
using namespace std;
bool isPal;
int call;
int recursion(string& s, int l, int r) {
    call++;
    if (l >= r) {
        return 1;
    }
    else if (s[l] != s[r]) {
        return 0;
    }
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(string& s) {
    return recursion(s, 0, s.length() - 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        call = 0;
        cout << isPalindrome(str)<<' '<<call << '\n';
    }
}
