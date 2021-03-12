#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long bi1, bi2, lim, hasil, tambah;
    int n;
    //a:
    scanf("%llu %llu %d", &bi1, &bi2, &n);
    lim = 18446744073709551615;
    tambah = bi1+bi2;
    if (n >=1 && n<=3 && bi1 >= 1 && bi1<=lim && bi2>=1 && bi2<=lim)
    {
      if (n==1) hasil = (tambah)%10;
      if (n==2) hasil = ((tambah)%100)/10;
      if (n==3) hasil = ((tambah)%1000)/100;
      printf("%llu\n", hasil);
    }
    else printf("Digit tidak valid.\n");
    //goto a;
}
