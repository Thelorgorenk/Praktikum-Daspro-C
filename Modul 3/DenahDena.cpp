#include <bits/stdc++.h>
using namespace std;

#define maxi 300
char denah[maxi][maxi];
char bangunan = '#';
int r, c;
void counter(int i, int j);

int main()
{
    int count = 0;
    cin >> r >> c;
    for (int i = 1; i <= r; i++) for (int j = 1; j <= c; j++) cin >> denah[i][j];
    for (int i = 1; i <= r; i++) for (int j = 1; j <= c; j++)
    {
        if(denah[i][j] == bangunan)
        {
            //denah[i][j] = '0';
            counter(i, j);
            count++;
        }
    }
    cout << count << "\n";
}

void remove(int i, int j) {denah[i][j] = '0';}

void counter(int i, int j)
{
    remove(i, j);
    if(denah[i - 1][j] == bangunan && i > 1) counter(i - 1, j);
    if(denah[i][j + 1] == bangunan && j < c) counter(i, j + 1);
    if(denah[i + 1][j] == bangunan && i < r) counter(i + 1, j);
    if(denah[i][j - 1] == bangunan && j > 1) counter(i, j - 1);
}
