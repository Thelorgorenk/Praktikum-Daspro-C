#include<bits/stdc++.h>
#include <cmath>
#include <string.h>
using namespace std;

typedef long long ll;
const int INF = 1e9;
const ll INFF = 1e18;
const int MAXN = 510;
const int MOD = 1e9 + 7;
const double PI = acos(-1.0);
const double INFD = 1E9;
const double EPS = 1e-9;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int num;
    int k;
    cin >> k;
    for (int x=0; x<k; x++)
    {
        cin >> num;
        int arr[num], pairs = 0, n1, n2;
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        int n = sizeof(arr)/sizeof(arr[0]);
        int diff = INT_MAX;
        for (int i=0; i<n-1; i++)
        {
          for (int j=i+1; j<n; j++)
          {
              if (abs(arr[i] - arr[j]) < diff)
              {
                diff = abs(arr[i] - arr[j]);
                n1 = arr[i];
                n2 = arr[j];
              }
              if (abs(arr[i] - arr[j]) == diff && arr[i] >= n1 && arr[j] >= n2)
              {
                n1 = arr[i];
                n2 = arr[j];
              }

          }
        }
        if (num >=2 && k>=1)
        {
            if (n1 > n2)
            {
                cout << n2 << " " << n1 << endl;
            } else cout << n1 << " " << n2 << endl;
        } else return 0;
    }
    return 0;
}
