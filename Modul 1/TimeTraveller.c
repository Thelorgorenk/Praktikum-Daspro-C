#include <stdio.h>

int main()
{
    int a, c, d;
    //p:
    scanf("%02d %02d", &c, &d);
    a = c/10;
    if (c<=24 && d<60 && c>=0 && d>=0)
    {
        if (a==0)
        {
            if (c==0)
            {
                if (d>0 && d<=9) printf("0%d 0%d",c,d);
                else if (d==0) printf("12 00");
                else printf("0%d %02d", c, d);
            }
            else if (d>=0 && d<=9) printf("0%d 0%d",c,d);
            else printf("0%d %02d", c, d);
            printf(" AM");
        }
        else if (a==1)
        {
            if (c>=10 && c<12)
            {
                printf("%d ", c);
                if (d==0 || d<=9) printf("0%d",d);
                else printf("%02d", d);
                printf(" AM");
            }
            else
            {
                if (c==12)
                {
                    printf("12 ");
                    if (d==0 || d<=9) printf("0%d",d);
                    else printf("%02d", d);
                    printf(" PM");
                }
                else
                {
                    printf("0%d ", c%12);
                    if (d==0 || d<=9) printf("0%d",d);
                    else printf("%02d", d);
                    printf(" PM");
                }
            }
        }
        else if (a==2)
        {
            if (c==24)
            {
               if (d==0) printf("00 00 AM");
               else if (d<=9) printf("00 0%d AM", d);
               else printf("00 %d AM", d);
            }
            else if (c>=20 && c<22)
            {
               printf("0%d ", c-12);
               if (d==0 || d<=9) printf("0%d",d);
               else printf("%02d", d);
               printf(" PM");
            }
            else
            {
                printf("1%d ", (c%10)-2);
                if (d==0 || d<=9) printf("0%d",d);
                else printf("%02d", d);
                printf(" PM");
            }
        }
    }
    else printf("Muzukashi");
    printf("\n");
    //goto p;
}
