#include<stdio.h>
int main(){
    int t,n,count=0,i;
    while(scanf("%d",&n)!=EOF){
        for(i=0,count=0;i<5;i++){
                scanf("%d",&t);
            if(t==n)
            count++;
        }
        printf("%d\n",count);
    }
return 0;
}
