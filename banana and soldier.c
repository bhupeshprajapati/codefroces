#include<stdio.h>
int main(){
    long long n,k,w,toBorrow,Cost=0;
    scanf("%I64d%I64d%I64d",&k,&n,&w);
    Cost=k*(w*(w+1)/2);
    toBorrow=Cost-n;
    if(toBorrow<=0){printf("0");}
    else
    printf("%I64d",toBorrow);
    return 0;
}