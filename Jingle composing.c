#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int cnt=0, i;
    double drtn=0.0;
    while(gets(str))
    {
        if(str[0]=='*') break;
        for(i=0, cnt=0; str[i]; i++)
        {
            if(str[i]=='/')
            {
                if(drtn==1.00) cnt++;
                drtn = 0.00;
            }
            else if(str[i]=='W') drtn+=(1.00);
            else if(str[i]=='H') drtn+=(1.00/2.0);
            else if(str[i]=='Q') drtn+=(1.00/4.0);
            else if(str[i]=='E') drtn+=(1.00/8.0);
            else if(str[i]=='S') drtn+=(1.00/16.0);
            else if(str[i]=='T') drtn+=(1.00/32.0);
            else if(str[i]=='X') drtn+=(1.00/64.0);
        }
        printf("%d\n", cnt);
    }
    return 0;
}
