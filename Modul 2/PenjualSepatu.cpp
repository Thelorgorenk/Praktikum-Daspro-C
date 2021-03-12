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
    int k;
    cin >> k;
        int arr[k], pairs = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
   sort(arr, arr + k);
    for (int i = 0; i < k - 1;) {
        if (arr[i] == arr[i + 1]) {
            pairs++;
            i = i + 2;
        }
        else {
            i++;
        }
    }
    cout << pairs << endl;
}
