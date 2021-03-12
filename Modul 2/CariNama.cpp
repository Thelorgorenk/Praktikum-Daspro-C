#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char i1 = 'I', v='V', a='A', n='N';
    int ni=0,nv=0,na=0,nn=0,num,total=0;
    cin >> num;
    char arr[num];
    for (int i=0; i<num; i++)
    {
        cin >> arr[i];

        if (arr[i] == i1) ni++;
        else if (arr[i] == v && ni>0 && ni > nv) nv++;
        else if (arr[i] == a && nv>0 && nv > na) na++;
        else if (arr[i] == n && na>0) nn++;
        if (nn>0)
        {
            total++; ni--; nv--; na--; nn--;
        }
    }
    cout << total << endl;
}
