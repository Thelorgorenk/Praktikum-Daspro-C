#include <bits/stdc++.h>
using namespace std;

int hitungbeda(int arr1[], int arr2[], int n)
{
   bool f = false;
   int hasil = 0;
   unordered_map<int, int> up;
   for (int i = 0; i < n; i++) up[arr1[i]]++;
   for (int i = 0; i < n; i++)
   if (up.find(arr2[i]) != up.end() && up[arr2[i]] != 0) up[arr2[i]]--;
   for (int i = 0; i < n; i++) if (up[arr1[i]] != 0){hasil++; up[arr1[i]] = 0;}
   return hasil;
}

int main()
{
    int T, n;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        int arr1[n], arr2[n];
        for(int k = 0; k <= n; k++) arr1[k] = k+1;
        for (int j = 0; j < n; j++) cin >> arr2[j];
        cout << hitungbeda(arr1, arr2, n) << endl;
    }
    return 0;
}
