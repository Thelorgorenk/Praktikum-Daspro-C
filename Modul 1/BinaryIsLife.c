#include <stdio.h>

int main()
{
    int n;
    char a='0',b='0',c='0',d='0',e='0',f='0',g='0',h='0';
    scanf("%d", &n);
    if (n>=0 && n<=255)
    {
        if (n>=128)
        {
            a='1';
            n -= 128;
        }
        if (n>=64)
        {
            b='1';
            n -=64;
        }
        if (n>=32)
        {
            c='1';
            n -= 32;
        }
        if (n>=16)
        {
            d='1';
            n -= 16;
        }
        if (n>=8)
        {
            e='1';
            n -= 8;
        }
        if (n>=4)
        {
            f='1';
            n -= 4;
        }
        if (n>=2)
        {
            g='1';
            n -= 2;
        }
        if(n==1)
        {
            h = '1';//printf("1");
        }
        printf("%c%c%c%c%c%c%c%c\n", a,b,c,d,e,f,g,h);
    }
}
