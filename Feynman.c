#include <stdio.h>
int main()
{
    int a,b;
    while(1)
    {
        scanf("%d", &a);
        if(a==0) break;
        else b=(a*(a+1)*((2*a)+1))/6;
        printf("%d\n",b);
    }
    return 0;
}
