#include <stdio.h>

int main()
{
    int n,x,y;
    double p, l, s;
    scanf("%lf %lf %lf", &p, &l, &s);
    if (p>0 && p<=1000000 && l>0 && l<=1000000 && s<=1000000 && s>0)
    {
        if (p<s && l>=s)
        {
            x = 1;
            y = (l/s) +1;
            n = x*y;
        }
        else if (p>=s && l<s) //5 4 5
        {
            y = 1;
            x = (p/s) +1;
            n = x*y;
        }
        else if (p>=s && l>=s)
        {
            x = (p/s) + 1;
            y = (l/s) + 1;
            n = x*y;
        }
        else if (p<s && l<s)
        {
            n = 0;
        }
        //else printf("0\n");
        printf("%d\n", n);
    }
    else if (p==0 || l==0 || s==0) printf("0\n");
}
