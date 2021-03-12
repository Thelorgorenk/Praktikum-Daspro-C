#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int T;
    scanf("%d", &T);
    long long int x, y, bx0, bx1, by0, by1, x1, y1, vec_x, vec_y, cx0, cx1, cy0, cy1;
    while(T--)
    {
        cin >> bx0 >> by0 >> bx1 >> by1 >> cx0 >> cy0 >> cx1 >> cy1 >> vec_x >> vec_y;
        x1 = cx0;
        y1 = cy0;
        x = bx1 - bx0 - (cx1 - cx0);
        y = by1 - by0 - (cy1 - cy0); 
        long long int a = vec_y * x, b = vec_x * y * -1, c = vec_y * x1 - vec_x * y1, g = __gcd(a,b); 
        if(c % g == 0) cout << "(/^v^)/\n";
        else cout << "(-_-)\n";
    }
}
