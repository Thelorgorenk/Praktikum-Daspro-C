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
    int n, cnt, freq_save[2000];
    int maxi = -1;
    char str[1000];
    scanf("%d", &n);
    getchar();
    for (int i=0; i<n; i++)
    {
        scanf("%[^\n]", str);
        getchar();
        for (int k=0; k<strlen(str); k++)
        {
            if (str[k]>='A' && str[k] <= 'Z') str[k] += 32;
            if (str[k]>='a' && str[k] <= 'z')
            {
                for (int x=97; x<=122; x++)
                {
                    if (str[k] == x)
                    {
                        cnt++;
                        freq_save[x] += cnt;
                    }
                    if (freq_save[x] > maxi) maxi = freq_save[x];
                    //reset index
                    cnt = 0;
                }
            }
        }
        cout << "Testcase " << i << " :\n";
            for (int x=97; x<=122; x++)
            {
                if (maxi==freq_save[x])
                {
                    cout << (char) x << endl;
                    freq_save[x] = 0; //reset
                }
                else freq_save[x] = 0;
            }
            // reset previous most frequent char
            maxi = 0;
    }
}
