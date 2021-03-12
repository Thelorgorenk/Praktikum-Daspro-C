#include <iostream>
using namespace std;

int main() {
    int maxi=100;
    double num[maxi], sum=0;
    double n, avg, n0, nn, divider;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    double sumS = num[0];
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = i;  j < n; j++)
        {
            sum = sum + num[j];
            if (sum > sumS || i == 0 && j == 0)
            {
                sumS = sum;
                n0 = i;
                nn = j;
            }
        }
    }
    divider = nn - n0 + 1;
    avg = sumS/divider;
    printf("%.2lf\n",avg);
}
