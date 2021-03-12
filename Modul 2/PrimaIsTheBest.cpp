#include<iostream>
using namespace std;

int main()
{
   int check,n=0,c=0;
   cin>>n;
    int i;
 bool isPrime = true;
 if (n == 0 || n == 1) {
    isPrime = false;
 }
 else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
  if (isPrime)
  {
      for(i=2;i<=76000;i++)
      {
        check=0;

        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
              check=1;
               break;
            }
        }

        if(check==0) c++;
        if (n == i && isPrime)
        {
          cout <<c<< endl;
          break;
        }
     }
  } else cout << "Ini bilangan normal bjirr...\n";

return 0;

}
