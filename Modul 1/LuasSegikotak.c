#include <stdio.h>
#include <math.h>

int main() {
    unsigned int a, t;
    double c, l, area;
    //k:
    scanf("%u %u", &a, &t);
    if (a>=0 && t>=0 && a<=1000 && t<=1000)
    {
        c = sqrt((a*a) + (t*t));
        if (a==0 || t==0) printf("0.00\n");
        else if (c)
        {
            area = (a*t*c)/((c*c)+(a*t));
            if (area) printf("%.2f\n", area*area);
            else printf("%.2f\n", area*area);
        }
    }
    //goto k;
}
