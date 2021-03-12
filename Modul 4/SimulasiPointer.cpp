#include <bits/stdc++.h>
using namespace std;

#define loop(i, n) for (int i = 0; i < n; i++)

struct simulator
{
    int val;
    char name[1010] = {0}, t_ptr[1010] = {0};
};

int main()
{
    int value, n;
    char cmd_ptr[1010], cmd_addr[1010], maincmd[1010], cmd_type[1010];
    cin >> n;
    struct simulator pointer[1010];
    loop(i, n)
    {
        cin >> maincmd >> cmd_type;
        if (strcmp(maincmd, "init") == 0 && strcmp(cmd_type, "*") != 0)
        {
            cin >>value;
            loop(j, n) if (strcmp(pointer[j].name, "\0") == 0) {strcpy(pointer[j].name, cmd_type); pointer[j].val=value; break;}
        }
        if (strcmp(maincmd, "init") == 0 && strcmp(cmd_type, "*") == 0)
        {
            cin >> cmd_ptr >> cmd_addr;
            for (int j=0; cmd_addr[j] != '\0'; j++) cmd_addr[j] = cmd_addr[j + 1];
            loop(j, n) if (strcmp(pointer[j].name, cmd_addr) == 0) {strcpy(pointer[j].t_ptr, cmd_ptr); break;}
        }
        if (strcmp(maincmd, "modify") == 0 && strcmp(cmd_type, "*") != 0)
        {
            loop(j, n)
            {
                if (strcmp(cmd_type, pointer[j].t_ptr) == 0)
                {
                    cin >> cmd_addr;
                    for (int j=0; cmd_addr[j] != '\0'; j++) cmd_addr[j] = cmd_addr[j + 1];
                    loop(k, n) if (strcmp(pointer[k].name, cmd_addr) == 0) {strcpy(pointer[k].t_ptr, cmd_ptr); break;}
                }
                else if (strcmp(cmd_type, pointer[j].name) == 0) {cin >> value; pointer[j].val=value; break;}
            }
        }
        if (strcmp(maincmd, "modify") == 0 && strcmp(cmd_type, "*") == 0)
        {
            cin >> cmd_ptr;
            loop(j, n) if (strcmp(cmd_ptr, pointer[j].t_ptr) == 0) {cin >> value; pointer[j].val = value; break;}
        }
        if (strcmp(maincmd, "print") == 0) loop(j, n) if (strcmp(cmd_type, pointer[j].name) == 0) cout << pointer[j].val << endl;
   }
}
