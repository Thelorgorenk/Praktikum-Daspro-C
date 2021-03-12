#include <bits/stdc++.h>
using namespace std;

int arri[505050], n_arr[505050], n, T;

int binser(int left, int right)
{
    int mid = (left + right) >> 1;
    if (T == n_arr[right]) return right;
    if (T == n_arr[left]) return left;
    else if (left == right)
    {
        if (T < n_arr[left]) return left + 1;
        else if (T > n_arr[left]) return left;
    }
    else
    {
        if (T >= n_arr[mid]) return binser(left, mid);
        else if (T < n_arr[mid]) return binser(mid+1, right);
    }
    return 0;
}

int main()
{
    int init, cnt = 1, num = 1, left = 0, m;
    cin >> n;
    for (int i=0; i<n;i++) cin >> arri[i];
    n_arr[0] = arri[0];
    init = arri[0];
    for (int i=1; i<n;i++) if (abs(arri[i] - arri[i-1]) > 0) {n_arr[num] = arri[i]; cnt++; num++;}
    cin >> m;
    for (int i=0; i<m;i++)
    {
        int index = cnt - 1;
        cin >> T;
        if (T >= init) cout << 1 << "\n";
        else if (T < n_arr[index]) cout << cnt + 1 << "\n";
        else {cout << 1 + binser(left, index) << "\n";}
    }
}
