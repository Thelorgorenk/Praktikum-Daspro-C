#include <bits/stdc++.h>
using namespace std;

struct member
{
    char nama[1010];
    int n1, n2, n3;
};

int main()
{
    struct member data[1010];
    char name[1010];
    int n, n1maxi, n2maxi, n3maxi, sorttemp;
    int same_n3[1010] = {1}, same_n2[1010], same_n1[1010];
    memset(same_n3, 1, sizeof(same_n3)); memset(same_n2, 0, sizeof(same_n2)); memset(same_n1, 0, sizeof(same_n1));
    same_n3[0] = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> data[i].nama >> data[i].n1 >> data[i].n2 >> data[i].n3;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++)
    {
        if (data[i].n3 == data[j].n3) {same_n3[i]++; same_n3[j]++;}
        if (data[j].n3 > data[i].n3)
        {
            strcpy(name,data[i].nama); strcpy(data[i].nama,data[j].nama); strcpy(data[j].nama,name);
            sorttemp=same_n3[i];
            same_n3[i]=same_n3[j];
            same_n3[j]=sorttemp;
            n1maxi = data[i].n1; n2maxi = data[i].n2; n3maxi = data[i].n3;
            data[i].n1 = data[j].n1;
            data[i].n2 = data[j].n2;
            data[i].n3 = data[j].n3;
            data[j].n1 = n1maxi;
            data[j].n2 = n2maxi;
            data[j].n3 = n3maxi;
        }
    }

    for (int i = 0; i < n; i++) for(int j = 0; j < n; j++)
    {
        if (data[i].n2 == data[j].n2 && data[i].n3 == data[j].n3)
        {
            if (same_n3[i] >= 2 && same_n3[j] >= 2) {same_n2[i]++; same_n2[j]++;}
        }
        if (data[i].n2 < data[j].n2 && same_n3[i] > 1 && same_n3[j] > 1 && data[i].n3 == data[j].n3)
        {
            strcpy(name,data[i].nama); strcpy(data[i].nama,data[j].nama); strcpy(data[j].nama,name);
            sorttemp = same_n2[i];
            same_n2[i] = same_n2[j];
            same_n2[j] = sorttemp;
            n1maxi = data[i].n1; n2maxi = data[i].n2; n3maxi = data[i].n3;
            data[i].n1 = data[j].n1; data[i].n2 = data[j].n2; data[i].n3 = data[j].n3;
            data[j].n1 = n1maxi; data[j].n2 = n2maxi; data[j].n3 = n3maxi;
        }
    }

    for (int i = 0; i < n; i++) for(int j = 0; j < n; j++)
    {
        if (data[i].n1 == data[j].n1 && data[i].n2 == data[j].n2 && data[i].n3 == data[j].n3)
        {
            if (same_n2[i] > 0 && same_n2[j] >= 1) {same_n1[i]++; same_n1[j]++;}
        }
        if (data[i].n1 < data[j].n1 && data[i].n2 == data[j].n2 && data[i].n3 == data[j].n3)
        {
            if (same_n2[i] >= 1 && same_n2[j] >= 1)
            {
                strcpy(name,data[i].nama); strcpy(data[i].nama,data[j].nama); strcpy(data[j].nama,name);
                sorttemp = same_n1[i];
                same_n1[i] = same_n1[j];
                same_n1[j] = sorttemp;
                n1maxi = data[i].n1; n2maxi = data[i].n2; n3maxi = data[i].n3;
                data[i].n1 = data[j].n1; data[i].n2 = data[j].n2; data[i].n3 = data[j].n3;
                data[j].n1 = n1maxi; data[j].n2 = n2maxi; data[j].n3 = n3maxi;
            }
        }
    }

    for (int i=0;i<n;i++) for(int j = 0; j < n; j++)
    {
        if (same_n1[i] > 0 && same_n1[j] > 0 && strcmp(data[j].nama, data[i].nama) > 0)
        {
            if (data[i].n3 == data[j].n3 && data[i].n2 == data[j].n2 && data[i].n1 == data[j].n1)
            {
                strcpy(name,data[i].nama); strcpy(data[i].nama,data[j].nama); strcpy(data[j].nama,name);
                sorttemp = same_n1[i];
                same_n1[i] = same_n1[j];
                same_n1[j] = sorttemp;
                n1maxi = data[i].n1; n2maxi = data[i].n2; n3maxi = data[i].n3;
                data[i].n1 = data[j].n1; data[i].n2 = data[j].n2; data[i].n3 = data[j].n3;
                data[j].n1 = n1maxi; data[j].n2 = n2maxi; data[j].n3 = n3maxi;
            }
        }
    }
    for (int i = n-1; i >= 0; --i) cout << data[i].nama << " " << data[i].n1 << " " << data[i].n2 << " " << data[i].n3 << endl;
}
