#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(1){
            printf("%d ",n);
        if(n==1)
            break;
        else if(n%2!=0)
            n = 3*n+1;
        else
            n = n/2;
    }


return 0;
}
