#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, jenis, total = 0;
    cin >> n;
    long long harga[1010], kue[1010];
    memset(harga, 0, sizeof(harga));
    memset(kue, 0, sizeof(kue));
    for (long long i=0; i<n; i++)
    {
        cin >> jenis;
        for (long long j=0; j<jenis; j++) cin >> kue[j];
        for (long long j=0; j<jenis; j++) cin >> harga[j];
        long long num = sizeof(kue) / sizeof(kue[0]);
        sort(harga, harga + num, greater<int>());
        sort(kue, kue + num, greater<int>());
        for (long long j=0; j<jenis; j++) total += kue[j] * harga[j];
        cout << total << endl;
        total = 0;
        memset(harga, 0, sizeof(harga));
        memset(kue, 0, sizeof(kue));
    }
}
