#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t,i;
    double l,w,r,areaofcircle, areaofrect;

    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%lf", &l);
        w = l*0.6;
        r = l/5.0;
        areaofcircle = 3.1415*r*r;
        areaofrect = l*w;
        printf("%0.2lf %0.2lf", areaofcircle,(areaofrect-areaofcircle));

    }
    return 0;
}
