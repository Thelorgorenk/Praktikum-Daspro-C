#include <bits/stdc++.h>
#include <string.h>
using namespace std;

struct perpus
{
    char judul[105], penulis[105], tahun[105];
};

int main(void)
{
    struct perpus buku[1010];
    unsigned long long int n_ins = 0, findCounter = 0;
    unsigned long long int maxi = ULLONG_MAX;
    bool found = 0;
    char cmd[10], searchT[10], jud[105], pen[105], tah[105];
    for (unsigned long long int i = 0; i < maxi; i++)
    {
        scanf("%[^\n]%*c", cmd);
        if (strcmp(cmd, "0") == 0) return 0;
        if (strcmp(cmd, "1") == 0)
        {
            scanf("%[^\n]%*c", buku[n_ins].judul);
            scanf("%[^\n]%*c", buku[n_ins].penulis);
            scanf("%[^\n]%*c", buku[n_ins].tahun);
            n_ins++;
            cout << "Buku berhasil ditambahkan." << endl;
            cout << "\n==============\n";
        }
        if (strcmp(cmd, "2") == 0)
        {
            scanf("%[^\n]%*c", searchT);
            if (strcmp(searchT, "1") == 0)
            {
                scanf("%[^\n]%*c", jud);
                for (unsigned long long int j=0; j < n_ins; j++)
                {
                    if (strcmp(jud, buku[j].judul) == 0)
                    {
                        cout << buku[j].penulis << ". '" << buku[j].judul << "'. " << buku[j].tahun << endl;
                        found = 1;
                        findCounter++;
                    }
                }
                cout << findCounter << " buku dengan judul '" << jud << "' ditemukan.\n";
            }
            if (strcmp(searchT, "2") == 0)
            {
                scanf("%[^\n]%*c", pen);
                for (unsigned long long int j=0; j < n_ins; j++)
                {
                    if (strcmp(pen, buku[j].penulis) == 0)
                    {
                        cout << buku[j].penulis << ". '" << buku[j].judul << "'. " << buku[j].tahun << endl;
                        found = 1;
                        findCounter++;
                    }
                }
                cout << findCounter << " buku dengan penulis '" << pen << "' ditemukan.\n";
            }
            if (strcmp(searchT, "3") == 0)
            {
                scanf("%[^\n]%*c", tah);
                for (unsigned long long int j=0; j < n_ins; j++)
                {
                    if (strcmp(tah, buku[j].tahun) == 0)
                    {
                        cout << buku[j].penulis << ". '" << buku[j].judul << "'. " << buku[j].tahun << endl;
                        found = 1;
                        findCounter++;
                    }
                }
                cout << findCounter << " buku dengan tahun '" << tah << "' ditemukan.\n";
            }
            cout << "\n==============\n";
        }
        if (strcmp(cmd, "3") == 0)
        {
            cout << "Daftar Buku\n";
            for (unsigned long long int j = 0; j < n_ins; j++) cout << buku[j].penulis << ". '" << buku[j].judul << "'. " << buku[j].tahun << endl;
            cout << "\n==============\n";
        }
        findCounter = 0; found = 0;
    }

}
