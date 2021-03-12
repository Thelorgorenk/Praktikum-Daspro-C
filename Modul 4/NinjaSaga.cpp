#include <bits/stdc++.h>
using namespace std;

struct chara
{
    int hp, atk, atkspd, act = 0;
};

int main()
{
    struct chara player[105], enemy[105];
    int np, ne, patkspd, patk, php;
    bool win, ended = 0;
    cin >> np >> ne;
    int patcked = np-1, eatcked = ne-1;
    for (int i=0;i<np;i++) cin >> player[i].hp >> player[i].atk >> player[i].atkspd;
    for (int i=0;i<ne;i++) cin >> enemy[i].hp >> enemy[i].atk >> enemy[i].atkspd;
    for (int i=0;i<np;i++) for (int j=i+1;j<np;j++)
    {
        if (player[j].atkspd > player[i].atkspd)
        {
            if (player[i].atkspd > 0 && player[j].atkspd > 0)
            {
                php=player[i].hp; patk=player[i].atk; patkspd=player[i].atkspd; player[i].hp=player[j].hp;
                player[i].atk=player[j].atk; player[i].atkspd=player[j].atkspd;
                player[j].hp=php; player[j].atk=patk; player[j].atkspd=patkspd;
            }
        }
    }
    for (int i=0;i<ne;i++) for (int j=i+1;j<ne;j++)
    {
        if (enemy[i].atkspd<enemy[j].atkspd)
        {
            if (enemy[i].atkspd > 0 && enemy[j].atkspd > 0)
            {
                php=enemy[i].hp; patk=enemy[i].atk; patkspd=enemy[i].atkspd;
                enemy[i].hp=enemy[j].hp; enemy[i].atk=enemy[j].atk; enemy[i].atkspd=enemy[j].atkspd;
                enemy[j].hp=php; enemy[j].atk=patk; enemy[j].atkspd=patkspd;
            }
        }
    }
    while (!ended)
    {
        int pleft=0, eleft=0;
        for (int i=0;i<patcked;i++) {player[i].act+=player[i].atkspd; if (player[i].act>=100) {player[i].act%=100; enemy[eatcked].hp-=player[i].atk;}}
        for (int i=0;i<eatcked;i++) {enemy[i].act+=enemy[i].atkspd; if (enemy[i].act>=100) {enemy[i].act%=100; player[patcked].hp-=enemy[i].atk;}}
        for (int i=0;i<np;i++) if (player[i].hp>0) {pleft++; patcked = pleft-1;}
        for (int i=0;i<ne;i++) if (enemy[i].hp>0) {eleft++; eatcked = eleft-1;}
        if (eleft==0) {win = 1; ended=1;}
        if (pleft==0) {win = 0; ended=1;}
    }
    if (win == 1) cout << "Player menang" << endl;
    else cout << "Enemy menang" << endl;
}
