#include<stdio.h>
int main(){
    long long int a,b,ans=0;
    scanf("%I64d %I64d",&a,&b);
    while (a > 0 && b > 0){
    if (a>=b){
        ans = ans + a/b;
        a = a%b;
    }
    else{
        ans = ans + b/a;
        b = b%a;
    }
    }
    printf("%I64d",ans);
    return 0;
}
