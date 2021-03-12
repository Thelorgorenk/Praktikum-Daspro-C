#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10010], arri[10010], T, n;
    cin >> T;
    while (T--)
    {
        int safe_rusuh = 1, salipt = 0, salip = 0;
        cin >> n;
        for (int i=0; i<n; i++) {arri[i] = i+1; cin >> arr[i];}
        for (int i=0; i<n; i++) if(arri[i] < (arr[i]-2)) safe_rusuh = 0;
        for (int i=1; i<n; i++){
            for (int j=0; i>j; j++)
            {
                if (arr[i] < arr[j]) salipt++;
                else if (salipt == 3) safe_rusuh = 0;
            }
            salip += salipt;
            salipt = 0;
        }
        if (safe_rusuh == 0) cout << "Rusuh gan\n";
        else cout << salip << endl;
    }
}
