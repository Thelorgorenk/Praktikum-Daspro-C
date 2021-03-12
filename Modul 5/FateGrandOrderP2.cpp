#include <bits/stdc++.h>
using namespace std;
#define cmp(q,y) strcmp(q,y)==0
#define less(q,y) strcmp(q,y)<0
#define more(q,y) strcmp(q,y)>0
int sorting = 0, initsort;

typedef struct Card
{
    char nama[300], kelas[50], rarity[20], gender[300], align[300], nprank[10];
    int level, nplvl, atk, hp, blvl, rarin, clasin, nprin, index;
} card;
card kartu[10100], kartu2[10100];
int countbeda(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++) if (arr[i] == arr[j]) break;
        if (i == j) res++;
    }
    return res;
}
int apayangsama(int arr[], int size)
{
    int i, j;
    for(i = 0; i < size; i++) for(j = i+1; j < size; j++) if(arr[i] == arr[j]) {arr[0]=arr[i];break;}
    return arr[0];
}
bool calc_sorting(card a, card b)
{
    if (initsort==1) {if (a.rarin != b.rarin) return a.rarin > b.rarin;}
    if (initsort==2) {if (a.clasin != b.clasin) return a.clasin > b.clasin;}
    if (initsort==3) {if (a.level != b.level) return a.level > b.level;}
    if (initsort==4) {if (a.blvl != b.blvl) return a.blvl > b.blvl;}
    if (initsort==5) {if (a.nplvl != b.nplvl) return a.nplvl > b.nplvl;}
    if (initsort==6) {if (a.nprin != b.nprin) return a.nprin > b.nprin;}
    if (initsort==7) {if (a.atk != b.atk) return a.atk > b.atk;}
    if (initsort==8) {if (a.hp != b.hp) return a.hp > b.hp;}
    if (initsort==9) {if (!cmp(a.gender, b.gender)) return less(a.gender, b.gender);}
    if (initsort==10) {if (!cmp(a.align, b.align)) return less(a.align, b.align);}
    if (initsort==11) {if (!cmp(a.nama, b.nama)) return less(a.nama, b.nama);}
    if (initsort==12) {if (a.index != b.index) return a.index < b.index;}
    if (a.rarin != b.rarin && initsort != 1) return a.rarin > b.rarin;
    if (a.clasin != b.clasin && initsort != 2) return a.clasin > b.clasin;
    if (a.level != b.level && initsort != 3) return a.level > b.level;
    if (a.blvl != b.blvl && initsort != 4) return a.blvl > b.blvl;
    if (a.nplvl != b.nplvl && initsort != 5) return a.nplvl > b.nplvl;
    if (a.nprin != b.nprin && initsort != 6) return a.nprin > b.nprin;
    if (a.atk != b.atk && initsort != 7) return a.atk > b.atk;
    if (a.hp != b.hp && initsort != 8) return a.hp > b.hp;
    if (!cmp(a.gender, b.gender) && initsort != 9) return less(a.gender, b.gender);
    if (!cmp(a.align, b.align) && initsort != 10) return less(a.align, b.align);
    if (!cmp(a.nama, b.nama) && initsort != 11) return less(a.nama, b.nama);
    if (a.index != b.index && initsort != 12) return a.index < b.index;
    return a.index < b.index;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    getchar();
    for(i=0; i<n; i++)
    {
        scanf("\n%[^\n]%*c",kartu[i].nama);
        cin >> kartu[i].rarity;
        scanf("\n%[^\n]%*c",kartu[i].kelas);
        scanf("\n%[^\n]%*c",kartu[i].gender);
        scanf("\n%[^\n]%*c",kartu[i].align);
        cin>>kartu[i].level>>kartu[i].nplvl>>kartu[i].atk>>kartu[i].hp>>kartu[i].blvl;
        scanf("\n%[^\n]%*c",kartu[i].nprank);
        kartu[i].index = i;
        if (cmp(kartu[i].rarity, "5-Star") || cmp(kartu[i].rarity, "SSR")) kartu[i].rarin = 5;
        if (cmp(kartu[i].rarity, "4-Star") || cmp(kartu[i].rarity, "SR")) kartu[i].rarin = 4;
        if (cmp(kartu[i].rarity, "3-Star") || cmp(kartu[i].rarity, "R")) kartu[i].rarin = 3;
        if (cmp(kartu[i].rarity, "2-Star") || cmp(kartu[i].rarity, "UC")) kartu[i].rarin = 2;
        if (cmp(kartu[i].rarity, "1-Star") || cmp(kartu[i].rarity, "C")) kartu[i].rarin = 1;
        if (cmp(kartu[i].kelas, "Saber")) kartu[i].clasin = 13;
        if (cmp(kartu[i].kelas, "Lancer")) kartu[i].clasin = 12;
        if (cmp(kartu[i].kelas, "Archer")) kartu[i].clasin = 11;
        if (cmp(kartu[i].kelas, "Rider")) kartu[i].clasin = 10;
        if (cmp(kartu[i].kelas, "Caster")) kartu[i].clasin = 9;
        if (cmp(kartu[i].kelas, "Assassin")) kartu[i].clasin = 8;
        if (cmp(kartu[i].kelas, "Berserker")) kartu[i].clasin = 7;
        if (cmp(kartu[i].kelas, "Ruler")) kartu[i].clasin = 6;
        if (cmp(kartu[i].kelas, "Avenger")) kartu[i].clasin = 5;
        if (cmp(kartu[i].kelas, "Moon Cancer")) kartu[i].clasin = 4;
        if (cmp(kartu[i].kelas, "Alter Ego")) kartu[i].clasin = 3;
        if (cmp(kartu[i].kelas, "Foreigner")) kartu[i].clasin = 2;
        if (cmp(kartu[i].kelas, "Shielder")) kartu[i].clasin = 1;
        if (cmp(kartu[i].nprank, "EX")) kartu[i].nprin = 6;
        if (cmp(kartu[i].nprank, "A")) kartu[i].nprin = 5;
        if (cmp(kartu[i].nprank, "B")) kartu[i].nprin = 4;
        if (cmp(kartu[i].nprank, "C")) kartu[i].nprin = 3;
        if (cmp(kartu[i].nprank, "D")) kartu[i].nprin = 2;
        if (cmp(kartu[i].nprank, "E")) kartu[i].nprin = 1;
    }
    int uji, num = 0, clasnum = 0, gennum = 0, rarnum = 0, atknum = 0;
    int atk1[100]={0}, atk2[100] = {0}, hp1[100]={0}, hp2[100] = {0}, npl1[100] = {0}, npl2[100] = {0}, bl1[100] = {0}, bl2[100] = {0}, lv1[100] = {0}, lv2[100] ={0};
    bool bgen=0, ranki = 0, nleve = 0, rar = 0, kles = 0;
    int rarii[100]={0},npnum=0,lvnum=0,hpnum=0,blnum=0,rankii=0,rarnumz=0;
    char gen[1010], klez[1010];
    char cmd[1010], cmd1[1010], fnrank[1010];
    scanf("%d\n", &uji);
    for (int j = 0; j < INT_MAX; j++)
    {
        if (sorting == uji) return 0;
        cin >> cmd;
        scanf(" %[^\n]%*c", cmd1);
        if(cmp(cmd, "SortBy"))
        {
            sorting++;
            if(cmp(cmd1, "Name")) {initsort=11;}
            else if(cmp(cmd1, "Class")) {initsort=2;}
            else if(cmp(cmd1, "NP Rank")) {initsort=6;}
            else if(cmp(cmd1, "Rarity")) {initsort=1;}
            else if(cmp(cmd1, "NP Level")) {initsort=5;}
            else if(cmp(cmd1, "HP")) {initsort=8;}
            else if(cmp(cmd1, "ATK")) {initsort=7;}
            else if(cmp(cmd1, "Bond Level")) {initsort=4;}
            else if(cmp(cmd1, "Gender")) {initsort=9;}
            else if(cmp(cmd1, "Alignment")) {initsort=10;}
            else if(cmp(cmd1, "Level")) {initsort=3;}
            else if(cmp(cmd1, "ID")) {initsort=12;}
            sort(kartu, kartu + n, calc_sorting);
            rarnumz = countbeda(rarii, rarnum);
            rarii[0] = apayangsama(rarii, rarnum);
            //cout << "rarii: " << rarii[0] << endl;
            if(lvnum){for(i = 0;i < lvnum; i++)
            {
                if(lv1[0] < lv1[i]) lv1[0] = lv1[i];
                if(lv2[0] > lv2[i]) lv2[0] = lv2[i];
            }}else{lv1[0]=1;lv2[0]=100;}
            if(blnum>0){
            for(i = 0;i < blnum; i++)
            {
                if(bl1[0] < bl1[i]) bl1[0] = bl1[i];
                if(bl2[0] > bl2[i]) bl2[0] = bl2[i];
            }}else{bl1[0]=0;bl2[0]=15;}
            if(npnum>0){
            for(i = 0;i < npnum; i++)
            {
                if(npl1[0] < npl1[i]) npl1[0] = npl1[i];
                if(npl2[0] > npl2[i]) npl2[0] = npl2[i];
            }}else {npl1[0]=0;npl2[0]=5;}
            if(atknum>0){
            for(i = 0;i < atknum; i++)
            {
                if(atk1[0] < atk1[i]) atk1[0] = atk1[i];
                if(atk2[0] > atk2[i]) atk2[0] = atk2[i];
            }}else {atk1[0]=1;atk2[0]=25000;}
            if (hpnum>0){
            for(i = 0;i < hpnum; i++)
            {
                if(hp1[0] < hp1[i]) hp1[0] = hp1[i];
                if(hp2[0] > hp2[i]) hp2[0] = hp2[i];
            }} else {hp1[0] = 1;hp2[0]=25000;}
            for (int i = 0; i < n; i++)
            {
                if (gennum < 2 && clasnum < 2 && rarnumz < 2 && rankii < 2)
                {
                if ((kartu[i].level >= lv1[0] && kartu[i].level <= lv2[0]) && (kartu[i].atk >= atk1[0] && kartu[i].atk <= atk2[0]) && (kartu[i].nplvl >= npl1[0] && kartu[i].nplvl <= npl2[0]) && (kartu[i].hp >= hp1[0] && kartu[i].hp <= hp2[0]) && (kartu[i].blvl >= bl1[0] && kartu[i].blvl <= bl2[0]))
                {
                    // gender, nprank, class, rarity (full case)
                    if (bgen && ranki && kles && rar && cmp(gen, kartu[i].gender) && cmp(fnrank, kartu[i].nprank) && cmp(klez, kartu[i].kelas) && (rarii[0] == kartu[i].rarin))
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // class, nprank, rarity
                    if (rar && kles && ranki && (rarii[0] == kartu[i].rarin) && cmp(fnrank, kartu[i].nprank) && cmp(klez, kartu[i].kelas) && !bgen)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // gender, nprank, class only
                    if (bgen && ranki && kles && cmp(gen, kartu[i].gender) && cmp(fnrank, kartu[i].nprank) && cmp(klez, kartu[i].kelas) && !rar)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // gender, nprank, rarity only
                    if (bgen && ranki && rar && cmp(gen, kartu[i].gender) && (rarii[0] == kartu[i].rarin) && cmp(fnrank, kartu[i].nprank) && !kles)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // gender, rarity, class only
                    if (bgen && rar && kles && cmp(gen, kartu[i].gender) && (rarii[0] == kartu[i].rarin) && cmp(klez, kartu[i].kelas) && !ranki)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // class, nprank only
                    if (kles && ranki && cmp(klez, kartu[i].kelas) && cmp(fnrank, kartu[i].nprank) && !bgen && !rar)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // gender, nprank only
                    if (bgen && ranki && cmp(gen, kartu[i].gender) && cmp(fnrank, kartu[i].nprank) && !kles && !rar)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // gender, rarity only
                    if (bgen && rar && cmp(gen, kartu[i].gender) && (rarii[0] == kartu[i].rarin) && !kles && !ranki)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // gender & class only
                    if (bgen && kles && cmp(gen, kartu[i].gender) && cmp(klez, kartu[i].kelas) && !rar && !ranki)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // rarity & class only
                    if (rar && kles && (rarii[0] == kartu[i].rarin) && cmp(klez, kartu[i].kelas) && !bgen && !ranki)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // rarity & nprank only
                    if (rar && ranki && (rarii[0] == kartu[i].rarin) && cmp(fnrank, kartu[i].nprank) && !bgen && !kles)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // np rank only
                    if (ranki && cmp(fnrank, kartu[i].nprank) && !rar && !bgen && !kles)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // gender only
                    if (bgen && cmp(gen, kartu[i].gender) && !rar && !ranki && !kles)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // rarity only
                    if (rar && (rarii[0] == kartu[i].rarin) && !ranki && !bgen && !kles)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    // class only
                    if (kles && cmp(klez, kartu[i].kelas) && !ranki && !bgen && !rar)
                    {
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;
                    }
                    if (!kles && !rar && !bgen && !ranki){
                    kartu2[num].index = kartu[i].index;kartu2[num].atk = kartu[i].atk;kartu2[num].level = kartu[i].level;kartu2[num].nplvl = kartu[i].nplvl;kartu2[num].blvl = kartu[i].blvl;kartu2[num].rarin = kartu[i].rarin;kartu2[num].clasin = kartu[i].clasin;kartu2[num].nprin = kartu[i].nprin;
                    strcpy(kartu2[num].nama, kartu[i].nama); strcpy(kartu2[num].gender, kartu[i].gender);strcpy(kartu2[num].rarity, kartu[i].rarity);strcpy(kartu2[num].kelas, kartu[i].kelas);strcpy(kartu2[num].nprank, kartu[i].nprank);strcpy(kartu2[num].align, kartu[i].align);
                    num++;}
                    }
                }
            }
            cout << "Case #" << sorting << endl;
            //cout << kartu2[0].index << ": " << kartu2[0].nama << ", " << kartu2[0].rarity << " " << kartu2[0].kelas << ", Level " << kartu2[0].level << endl;
            //cout << kartu2[num-1].index << ": " << kartu2[num-1].nama << ", " << kartu2[num-1].rarity << " " << kartu2[num-1].kelas << ", Level " << kartu2[num-1].level << endl;
            for (int i = 0; i < num; i++) cout << kartu2[i].index << ": " << kartu2[i].nama << ", " << kartu2[i].rarity << " " << kartu2[i].kelas << ", Level " << kartu2[i].level << endl;
            num = 0; bgen=0; clasnum = 0; gennum = 0;
            ranki=0;nleve=0;rar=0;rarnum=0;kles=0;atknum=0;lvnum=0,npnum=0;hpnum=0;blnum=0;rankii=0;
            memset(&kartu2, 0, sizeof(kartu2));memset(rarii, 0, sizeof(rarii));
            memset(atk1, 0, sizeof(atk1));memset(atk2, 0, sizeof(atk2));memset(hp1, 0, sizeof(hp1));memset(hp2, 0, sizeof(hp2));memset(lv1, 0, sizeof(lv1));memset(lv2, 0, sizeof(lv2));
            memset(npl1, 0, sizeof(npl1));memset(npl2, 0, sizeof(npl2));memset(bl1, 0, sizeof(bl1));memset(bl2, 0, sizeof(bl2));
        }
        if(cmp(cmd, "Gender"))
        {
            bgen = 1;
            if (!cmp(gen, cmd1) && gennum > 0) gennum++;
            else strcpy(gen, cmd1);
            if (gennum==0) gennum++;
        }
        if(cmp(cmd, "Class"))
        {
            kles = 1;
            if (!cmp(klez, cmd1) && clasnum > 0) clasnum++;
            else strcpy(klez, cmd1);
            if (clasnum==0) clasnum++;
        }
        if(cmp(cmd, "Rarity"))
        {
            rar = 1;
            if (cmp(cmd1, "5-Star") || cmp(cmd1, "SSR")) rarii[rarnum] = 5;
            if (cmp(cmd1, "4-Star") || cmp(cmd1, "SR")) rarii[rarnum] = 4;
            if (cmp(cmd1, "3-Star") || cmp(cmd1, "R")) rarii[rarnum] = 3;
            if (cmp(cmd1, "2-Star") || cmp(cmd1, "UC")) rarii[rarnum] = 2;
            if (cmp(cmd1, "1-Star") || cmp(cmd1, "C")) rarii[rarnum] = 1;
            rarnum++;
        }
        if(cmp(cmd, "NP"))
        {
            int cal = 0;
            char * token = strtok(cmd1, " "), cmt2[50];
            while( token != NULL )
            {
                if (cal == 0 && cmp(token, "Rank")) {ranki = 1;strcpy(cmt2,token);}
                if (cal == 0 && cmp(token, "Level")) {nleve = 1;strcpy(cmt2,token);}
                if (cal == 1 && cmp(cmt2, "Rank"))
                {
                    if (rankii==0) {strcpy(fnrank, token);rankii++;}
                    else
                    {
                        if (!cmp(fnrank, token)) rankii++;
                    }
                }
                if (cal == 1 && cmp(cmt2, "Level")) {npl1[npnum] = stoi(token);}
                if (cal == 1 && cmp(cmt2, "Rank")) strcpy(fnrank, token);
                if (cal == 2 && nleve && cmp(cmt2, "Level")) {npl2[npnum] = stoi(token);npnum++;}
                token = strtok(NULL, " ");
                cal++;
            }
        }
        //kat B
        if(cmp(cmd, "Bond"))
        {
            int cal = 0;
            char * token = strtok(cmd1, " ");
            while( token != NULL )
            {
                if (cal == 1) bl1[blnum] = stoi(token);
                if (cal == 2) bl2[blnum] = stoi(token);
                token = strtok(NULL, " ");
                cal++;
            }
            blnum++;
        }
        if(cmp(cmd, "Level"))
        {
            int cal = 0;
            char * token = strtok(cmd1, " ");
            while( token != NULL )
            {
                if (cal == 0) lv1[lvnum] = stoi(token);
                if (cal == 1) lv2[lvnum] = stoi(token);
                token = strtok(NULL, " ");
                cal++;
            }
            lvnum++;
        }
        if(cmp(cmd, "ATK"))
        {
            int cal = 0;
            char * token = strtok(cmd1, " ");
            while( token != NULL )
            {
                if (cal == 0) atk1[atknum] = stoi(token);
                if (cal == 1) atk2[atknum] = stoi(token);
                token = strtok(NULL, " ");
                cal++;
            }atknum++;
        }
        if(cmp(cmd, "HP"))
        {
            int cal = 0;
            char * token = strtok(cmd1, " ");
            while( token != NULL )
            {
                if (cal == 0) hp1[hpnum] = stoi(token);
                if (cal == 1) hp2[hpnum] = stoi(token);
                token = strtok(NULL, " ");
                cal++;
            }
            hpnum++;
        }
    }
    return 0;
}
