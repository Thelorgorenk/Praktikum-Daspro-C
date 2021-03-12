#include <bits/stdc++.h>
using namespace std;

unsigned long long int arr[100010], x_find;

int findrangenum(int left, int right)
{
    int mid = (left+right) >> 1;
    if(x_find==arr[left]) return left;
    else
    {
        if(x_find>arr[mid]) return findrangenum(mid+1,right);
        else if(x_find<=arr[mid]) return findrangenum(left,mid);
    }
    return INT_MIN;
}

int main()
{
    int n, ind, hasil;
    char cmd[15];
    cin >> n;
    for(int i=0;i<91;i++) {if (i == 0 || i == 1) arr[i] = 1; else arr[i] = arr[i-1] + arr[i-2];}
    for(int i=0;i<n;i++)
    {
        cin >> cmd;
        if(strcmp(cmd,"index")==0) {cin >> x_find; hasil = findrangenum(0,90); cout << hasil + 1 << endl;}
        if(strcmp(cmd,"fibo")==0) { cin >> ind; cout << arr[ind-1] << endl;}
    }
    return 0;
}
