#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long mod = 268*(1e9 + 7), p4,p3,p2,s3,s2, sum, red, res;
    unsigned long long n;
    int t;
    scanf("%d", &t);
    // 268*(1e9+7) = 24000000168
    for (int i=0; i<t; i++)
    {
        scanf("%lld", &n);
        s2 = (n*n)%24000000168;
        s3 = (s2*n)%24000000168;
        p4 = (s3*n)%24000000168;
        p3 = (6*s2*n)%24000000168;
        p2 = (23*s2)%24000000168;
        sum = (p2+p4)%24000000168;
        red = sum-p3-18*n+24;
        if(red>0)
        {
            red = (sum-p3-18*n+24)%24000000168;
            res = (red/24)%24000000168;
            printf("%lld\n", res);
        }
        else
        {
            red += 24000000168;
            res = (red/24)%24000000168;
            printf("%lld\n", res);
        }
        /*
        n%=mod;
        p4 = ((n*n*n*n)%(mod*24))/24;
        p3 = ((6*n*n*n)%(mod*24))/24;
        p2 = ((23*n*n)%(mod*24))/24;
        p1 = ((18*n)%(mod*24))/24;
        p0 = 1;
        s1 = ((p4%mod)-(p3%mod))%mod;
        s2 = ((p2%mod)-(p1%mod))%mod;
        hasil = ((s1%mod)+(s2%mod)+1)%mod;
        //hasil = ((((n*n*n*n-6*n*n*n+23*n*n-18*n+24))%1000000007)%(mod*24))/24;
        cout << hasil << endl;*/
    }
}
