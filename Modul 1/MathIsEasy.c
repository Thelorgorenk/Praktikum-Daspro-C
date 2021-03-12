#include <stdio.h>
 
int main() {
    long long hasil;
    unsigned long long a,b;
    char op;
 
    scanf("%llu %c %llu", &a, &op, &b);
    if (op=='+')
    {
        a=a%10000007;
        b=b%10000007;
        hasil=(a+b)%10000007;
        printf("%d", hasil);
    }
    else if (op=='-')
    {
        hasil=a-b;
        printf("%lld\n", hasil);
    }
}
