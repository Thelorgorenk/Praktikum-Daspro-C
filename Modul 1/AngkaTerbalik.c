#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n<= 99999999 && n >=0)
    {
        // 12345
        if (n>9999999) printf("%d%d%d%d%d%d%d%d",n%10, (n/10)%10, (n/100)%10, (n/1000)%10, (n/10000)%10, (n/100000)%10, (n/1000000)%10,n/10000000);
        else if (n>999999) printf("%d%d%d%d%d%d%d",n%10, (n/10)%10, (n/100)%10, (n/1000)%10, (n/10000)%10, (n/100000)%10, n/1000000);
        else if (n>99999) printf("%d%d%d%d%d%d",n%10, (n/10)%10, (n/100)%10, (n/1000)%10, (n/10000)%10, n/100000);
        else if (n>9999) printf("%d%d%d%d%d",n%10, (n/10)%10, (n/100)%10, (n/1000)%10, n/10000);
        else if (n>999) printf("%d%d%d%d",n%10, (n/10)%10, (n/100)%10, n/1000);
        else if (n>99) printf("%d%d%d", n%10, (n/10)%10, n/100);
        else if (n >9) printf("%d%d", n%10, n/10);
        else if (n>=0) printf("%d", n);
    }
    printf("\n");
}
