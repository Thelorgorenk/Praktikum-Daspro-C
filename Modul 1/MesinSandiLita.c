#include <stdio.h>
#include <math.h>

int main()
{
    char alp;
    unsigned long long n, lim, num, hasil, c;
    scanf("%c %llu", &alp, &n);
    c = (int) alp;
    lim = 18446744073709551615; //18446744073709551616
    //printf("%llu", lim);
    if (n >=1 && n<=lim && ((c>=65 && c<=90) || (c>=97 && c <=122)))
    {
      if (c>=65 && c<=90)
      {
            num = c + n;
            if (num > 90)
            {
                hasil = 64+((num-90)%26);
            }
            else
            {
                hasil = num;
            }
            printf("%c\n", hasil);
      }
      else if (c>=97 && c <=122)
      {
            num = c+n;
            if (num > 122)
            {
                hasil = 96+((num-122)%26);
            }
            else hasil = num;
            printf("%c\n", hasil);
      }
      else printf("Mesin sandi Lita belum kuat~\n");
    }
    else printf("Mesin sandi Lita belum kuat~\n");
}
