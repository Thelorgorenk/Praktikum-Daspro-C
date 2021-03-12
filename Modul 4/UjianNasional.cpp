#include <bits/stdc++.h>
using namespace std;

struct siswa
{
    string nama;
    int n1, n2, n3, n4;
};

int main()
{
    struct siswa ujian[1010];
    char num[10], input[1010], name[1010];
    bool ins=0, edit=0, show=0, showall=0;
    scanf("%[^\n]%*c", num);
    int n = stoi(num), spaces = 0, n_ins = 0, index = 0, apa = 0;
    for (int i=0; i<n; i++)
    {
        scanf("%[^\n]%*c", input);
        char *cmd = strtok(input, " ");
        while (cmd != NULL)
        {
            if (strcmp(cmd, "Insert") == 0 && spaces==0)
            {
                ins = 1; n_ins++;
            }
            if (strcmp(cmd, "Edit") == 0 && spaces==0) edit = 1;
            if (strcmp(cmd, "Show") == 0 && spaces==0) show = 1;
            if (strcmp(cmd, "ShowAll") == 0 && spaces==0) showall = 1;
            if (ins)
            {
                if (spaces == 1) ujian[i].nama = cmd;
                if (spaces == 2) ujian[i].n1 = stoi(cmd);
                if (spaces == 3) ujian[i].n2 = stoi(cmd);
                if (spaces == 4) ujian[i].n3 = stoi(cmd);
                if (spaces == 5) ujian[i].n4 = stoi(cmd);
            }
            if (edit)
            {
                if (spaces == 1) for (int j=0; j < n_ins; j++)
                {
                    strcpy(name, ujian[j].nama.c_str());
                    if (strcmp(cmd, name) == 0) index = j;
                }
                if (spaces == 2)
                {
                    if (strcmp(cmd, "Matematika") == 0) apa = 1;
                    if (strcmp(cmd, "IPA") == 0) apa = 2;
                    if (strcmp(cmd, "Indonesia") == 0) apa = 3;
                    if (strcmp(cmd, "Inggris") == 0) apa = 4;
                }
                if (spaces == 3)
                {
                    if (apa == 1) ujian[index].n1 = stoi(cmd);
                    if (apa == 2) ujian[index].n2 = stoi(cmd);
                    if (apa == 3) ujian[index].n3 = stoi(cmd);
                    if (apa == 4) ujian[index].n4 = stoi(cmd);
                }
            }
            if (show)
            {
                if (spaces == 1) for (int j=0; j < n_ins; j++)
                {
                    strcpy(name, ujian[j].nama.c_str());
                    if (strcmp(cmd, name) == 0)
                    cout << "Data " << ujian[j].nama << " :\nMatematika " << ujian[j].n1 << "\nIPA " << ujian[j].n2 << "\nIndonesia " << ujian[j].n3 << "\nInggris " << ujian[j].n4 <<endl;
                }
            }
            if (showall)
            {
                for (int j = 0; j < n_ins; j++)
                {
                    cout << "#" << j+1 << "\nData " << ujian[j].nama << " :\nMatematika " << ujian[j].n1 << "\nIPA " << ujian[j].n2 << "\nIndonesia " << ujian[j].n3 << "\nInggris " << ujian[j].n4 <<endl;
                }
            }
            cmd = strtok(NULL, " ");
            spaces++;
        }
        spaces = 0; ins = 0; show = 0; edit = 0; showall = 0; memset(name, 0, sizeof(name));
    }
}
