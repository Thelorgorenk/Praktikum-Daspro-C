#include <bits/stdc++.h>
using namespace std;
int arr[100010] = {0};
void equals_to_sum(int arr[], int n, int x)
{
    int leftindex, rightindex;
    int l = 0, r = n-1, selisih = INT_MAX;
    while (r > l)
    {
       if (abs(arr[l] + arr[r] - x) < selisih)
       {
           leftindex = l;
           rightindex = r;
           selisih = abs(arr[l] + arr[r] - x);
       }
       if (arr[l] + arr[r] > x) r--;
       else l++;
    }
    if (arr[leftindex]+arr[rightindex] == x) cout << leftindex+1 << " " << rightindex+1 << endl;
    else cout << "Gaada bebs.\n";
}

int main()
{
    int T, x;
    cin >> T;
    for(int i=0; i<T; i++) cin >> arr[i];
    cin >> x;
    equals_to_sum(arr, T, x);
    return 0;
}
