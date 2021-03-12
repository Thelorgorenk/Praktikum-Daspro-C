#include <stdio.h>

int main()
{
    int a,b,c,d;
    //w:
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a<=4 && a>=1 && b<=4 && b>=1 && c<=4 && c>=1 && d<=4 && d>=1)
    {
        if(a==b || b==c || c==d || a==c || a==d || b==d) printf("Urutan tidak valid.\n");
        else if (a<b<c<d) printf("Santuy Fuyu~\n");
        else if (d<c<b<a) printf("Santuy Fuyu~\n");
        else printf("Semangat Fuyu! Kamu pasti bisa!\n");
    }
    else printf("Urutan tidak valid.\n");
    //goto w;
}
