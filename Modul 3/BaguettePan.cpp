#include <bits/stdc++.h>
#define LL long long int
using namespace std;
LL MOD = 1000000007;
LL dp[130][400005];

int main()
{
    LL T, bound = 400000;
    for(LL i=1; i <= bound; ++i) dp[1][i] = 1;
    for(LL i=2; i<=125; ++i)
    {
        for(LL j=1; j <= bound/i; ++j)
        if(j <= i) dp[i][j] = dp[i-1][j];
        else dp[i][j] = (dp[i-1][j] + dp[i][j-i]) % MOD;
    }
    scanf("%lld", &T);
    for(LL k=1; k<= T; ++k)
    {
        LL j, i; scanf("%lld %lld", &j, &i); long long int temp = (j - (LL)((LL)i * (LL)(i + 1))/ 2 + 1);
        if(temp < 1) printf("Mada tarinai!\n");
        else printf("Ada %lld cara\n", dp[i][temp]);
    }
}
