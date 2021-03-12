#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int d,cnt;
    unsigned long int e, p, q, phi, k, a, x, v, modS, val, vval, div;
    unsigned long long int n, c, m;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> c >> e >> n;
        k = sqrt(n);
        if (k % 2 == 0) k--;
        while (k>=1)
        {
            if (n % k == 0)
            {
                 p = k;
                 q = n / p;
                 phi = (p-1)*(q-1);
                 a = 1;
                 x = e;
                 v = 0;
                 modS = phi;
                 cnt = 1;
                 while (modS > 0)
                 {
                     div = x / modS;
                     vval = x % modS;
                     val = (div*v)+a;
                     a = v;
                     v = val;
                     x = modS;
                     modS = vval;
                     cnt = -cnt;
                }
                if (x != 1)
                {
                     d = 0;
                     break;
                }
                if (cnt < 0) d = phi - a;
                else d = a;
                if (d < 0) d += phi;
                break;
            }
            k -= 2;
        }
        c %=  n;
        unsigned long long int res = 1;
        while (d > 0)
        {
            if (d & 1) res = (res*c)%n;
            c = (c*c) % n;
            d /= 2;
        }
        m=res;
        cout << m << endl;
    }
}
