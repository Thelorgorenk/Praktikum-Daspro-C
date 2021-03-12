    #include <stdio.h>
    #include <math.h>

    int main()
    {
       int n, peg1_n, peg2_n, lim, disk=1;
       long long int a;
       char peg1, peg2;
       //cc:
       scanf("%d %lld", &n, &a);
       peg1_n = (a&a-1)%3+1;
       peg2_n = ((a|a-1)+1)%3+1;
       //printf("peg: %d", peg1_n);
       lim = 1 << n;
       if (n<=50 && n>=1 && a>= 1 && a<=pow(2,50)-1)
       {
           if (a > pow(2,n)-1) printf("Yeay, sudah selesai!");
           else
           {
                   if (peg1_n == 1) peg1 = 'A';
                   if (peg2_n == 1) peg2 = 'A';
                   if (n%2==0)
                   {
                        if (peg1_n == 2) peg1 = 'C';
                        else if (peg1_n == 3) peg1 = 'B';
                        if (peg2_n == 2) peg2 = 'C';
                        else if (peg2_n == 3) peg2 = 'B';
                   }
                   else
                   {
                        if (peg1_n == 2) peg1 = 'B';
                        else if (peg1_n == 3) peg1 = 'C';
                        if (peg2_n == 2) peg2 = 'B';
                        else if (peg2_n == 3) peg2 = 'C';
                   }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       if((a & 1) != 1)
                       {
                           disk++;
                           a >>= 1;
                       }
                       
                   printf("Piringan ke-%d bergerak dari %c ke %c\n", disk, peg1, peg2);
           }
       }
       //goto cc;
    }
