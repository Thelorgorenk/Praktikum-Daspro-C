#include <bits/stdc++.h>
using namespace std;

#define size 8
char cb[size][size];

int main(){
    int res = 0, resQ = 0, B, K;
    // keperluan diagonal
    int resAk = 0,resAka = 0,resBk = 0,resBka = 0, rowD, colD;
    for(int i = 0; i<size ; i++) for(int j=0;j<size;j++)
    {
        cin >> cb[i][j];
        if (cb[i][j]=='M')
        {
            B=i;
            K=j;
        }
    }
    // kalo M pergi ke bawah
    for(int i=B+1; i<size ; i++)
    {
        if(cb[i][K]=='.') resQ++;
        else if(cb[i][K]=='K')
        {
            resQ=0;
            break;
        }
        else if(cb[i][K]=='L')
        {
            resQ++;
            res=max(res,resQ);
            resQ=0;
            break;
        }
    }
    // kalo M pergi ke atas
    resQ=0;
    for(int i=B-1;i>-1;i--)
    {
        if(cb[i][K]=='.'){
        resQ++;
        }
        else if(cb[i][K]=='K')
        {
            resQ=0;
            break;
        }
        else if(cb[i][K]=='L')
        {
            resQ++;
            res=max(res,resQ);
            resQ=0;
            break;
        }
    }
    // kalo M pergi ke kanan
    resQ=0;
    for(int i=K+1; i<size ; i++)
    {
        if(cb[B][i]=='.') resQ++;
        else if(cb[B][i]=='K')
        {
            resQ=0;
            break;
        }
        else if(cb[B][i]=='L')
        {
            resQ++;
            res=max(res,resQ);
            resQ=0;
            break;
        }
    }
    // kalo M pergi ke kiri
    resQ=0;
    for(int i=K-1;i>-1;i--)
    {
        if(cb[B][i]=='.') resQ++;
        else if(cb[B][i]=='K')
        {
            resQ=0;
            break;
        }
        else if(cb[B][i]=='L')
        {
            resQ++;
            res=max(res,resQ);
            resQ=0;
            break;
        }
    }
    // kalo M diagonal
    resQ = 0;
    rowD = B;
    colD = K;
    for(int i = 0; i < size; i++) // atas kanan
    {
        rowD--;
        colD++;
        if (rowD<0 || colD>7) break;
        else resAka++;
    }
    rowD=B;
    colD=K;
    for(int i = 0; i < size; i++) // bawah kiri
    {
        rowD++;
        colD--;
        if (rowD>7 || colD<0) break;
        else resBk++;
    }
    rowD=B;
    colD=K;
    for(int i = 0; i < size; i++) // atas kiri
    {
        rowD--;
        colD--;
        if (rowD<0 || colD<0) break;
        else resAk++;
    }
    rowD=B;
    colD=K;
    for(int i = 0; i < size; i++) // bawah kanan
    {
        rowD++;
        colD++;
        if (rowD>7 || colD>7) break;
        else resBka++;
    }

    // kalo M gerak atas kiri (Ak)
    resQ = 0;
    for(int i=1; i<resAk+1;i++)
    {
        if(cb[B-i][K-i]=='.') resQ++;
        else if(cb[B-i][K-i]=='K')
        {
            resQ=0;
            break;
        }
        else if(cb[B-i][K-i]=='L')
        {
            resQ++;
            res=max(res,resQ);
            resQ=0;
        }
    }
    // kalo M gerak bawah kiri (Bk)
    resQ=0;
    for(int i=1; i<resBk+1;i++)
    {
        if(cb[B+i][K-i]=='.') resQ++;
        else if(cb[B+i][K-i]=='K')
        {
            resQ=0;
            break;
        }
        else if(cb[B+i][K-i]=='L')
        {
            resQ++;
            res=max(res,resQ);
            resQ=0;
        }
    }
    // kalo M gerak atas kanan (Aka)
    resQ=0;
    for(int i=1; i<resAka+1;i++)
    {
        if(cb[B-i][K+i]=='.')
        {
            resQ++;
        }
        else if(cb[B-i][K+i]=='K')
        {
            resQ=0;
            break;
        }
        else if(cb[B-i][K+i]=='L')
        {
            resQ++;
            res=max(res,resQ);
            resQ=0;
        }
    }
    // kalo M gerak bawah kanan (Bka)
    resQ=0;
    for(int i=1; i<resBka+1;i++)
    {
        if(cb[B+i][K+i]=='.') resQ++;
        else if(cb[B+i][K+i]=='K')
        {
            resQ=0;
            break;
        }
        else if(cb[B+i][K+i]=='L')
        {
            resQ++;
            res=max(res,resQ);
            resQ=0;
        }
    }
    if (res > 0) cout << res;
    else cout<<"Kali ini gak makan lawan.";
}
