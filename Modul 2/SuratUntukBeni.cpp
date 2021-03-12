#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int i = 0, j = 0;
    int maxLen = 0;
    bool hash[256] = { 0 };
    while (j < n) {
        if (hash[s[j]]) {
            maxLen = max(maxLen, j-i);
            while (s[i] != s[j]) {
                hash[s[i]] = 0;
                i++;
            }
            i++;
            j++;
        }
        else {
            hash[s[j]] = 1;
            j++;
        }
    }
    maxLen = max(maxLen, n-i);
    cout << maxLen << endl;
}
