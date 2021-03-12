#include <bits/stdc++.h>
using namespace std;

bool cek_anagram(string kata_1, string kata_2)
{
    int num_1 = kata_1.length(), num_2 = kata_2.length();
    if (num_1 != num_2)  return false;
    sort(kata_1.begin(), kata_1.end()); sort(kata_2.begin(), kata_2.end());
    for (int i = 0; i < num_1; i++) if (kata_1[i] != kata_2[i]) return false;
    return true;
}

int main()
{
    string kata_1, kata_2;
    cin >> kata_1 >> kata_2;
    if (strcmp(kata_1.c_str(), kata_2.c_str()) != 0 && cek_anagram(kata_1, kata_2)) cout << "Yes, it's anagram.\n";
    else cout << "No, it's not.\n";
    return 0;
}
