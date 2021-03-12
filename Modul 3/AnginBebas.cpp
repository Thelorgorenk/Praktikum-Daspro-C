#include <iostream>
#include <math.h>
using namespace std;

#define size 8

char design[size][size];
int goUp(int designIndex, int num, int en,int indexN, char design[size][size]);
int goDown(int designIndex, int num, int en,int indexN, char design[size][size]);

int goUp(int designIndex, int num, int en,int indexN,char design[size][size]){
    if(designIndex<0) return 0;
    for (en; num > en; en++)
    {
        if (design[designIndex][en]=='.'|| design[designIndex][en]=='~') continue;
        else if (design[designIndex][en+1]=='\0' && design[designIndex][en]=='.') break;
        else if (design[designIndex][en]=='#' && design[designIndex-1][en-1]=='.')
        {
            for(int i=designIndex-1; i>-1; i--)
            {
                if (design[i][en-1]=='.' && design[i][en]=='.') return goUp(i, num, en-1, indexN, design);
                else if(design[i][en-1]=='#' || design[i][en-1]!='.') return 0;
            }
        }
        if (design[designIndex][en]=='#' && design[designIndex+1][en-1] == '.' && design[designIndex][en] != '.' && design[designIndex][en] != '~')
        {
            for(int i=designIndex+1;i<=indexN;i++)
            {
                if(design[designIndex+1][en]=='.'&& design[i][en-1]=='.') return goDown(i, num, en-1, indexN, design);
                else if(design[i][en-1]=='#') return 0;
                else if(design[i][en-1]=='\0') break;
                else if(design[i][en-1]!='.') return 0;
            }
        }
        else return 0;
    }
    return 1;
}
int goDown(int designIndex, int num, int en,int indexN, char design[size][size])
{
    if(indexN < designIndex) return 0;
    for (en; num > en; en++)
    {
        if (design[designIndex][en]=='.'|| design[designIndex][en]=='~') continue;
        else if (design[designIndex][en+1]=='\0' && design[designIndex][en]=='.') break;
        else if (design[designIndex][en]=='#' && design[designIndex+1][en-1]=='.')
        {
            for(int i=designIndex+1; i<=indexN; i++)

                if(design[designIndex+1][en]=='.'&& design[i][en-1]=='.') return goDown(i, num, en-1, indexN, design);
                else if(design[i][en-1]!='.' || design[i][en-1]=='#') return 0;
        }
        if (design[designIndex][en]=='#' && design[designIndex-1][en-1] == '.' && design[designIndex][en]!='.' && design[designIndex][en] !='~')
        {
            for(int i=designIndex-1; i>-1; i--)
            {
                if (design[i][en]=='.' && design[i][en-1]=='.') return goUp(i, num, en-1, indexN, design);
                else if(design[i][en-1]=='#' || design[i][en-1]!='.') return 0;
            }
        } else return 0;
    }
    return 1;
}

int main()
{
    int N, M, resUp, resDown, finres = 0;
    cin >> N >> M;
    for (int i=0;i<M;i++) for (int j=0;j<N;j++) cin >> design[i][j];
    for (int i=0;i<M;i++)
    {
        if (design[i][0]=='~')
        {
            resUp=0;
            resDown=goDown(i, N, 0, M, design);
            if(resDown==0) resUp = goUp(i, N, 0, M, design);
            finres += resUp + resDown;
        }
    }
    if (finres > 0) cout << "Sejukkk" << endl;
    else cout << "Gerah" << endl;
}
