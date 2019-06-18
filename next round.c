#include<stdio.h>
int main(){
    int n,i,j,k,part[100],count,nonpos=0,temp;
    int zero=1;
    scanf("%d%d",&n,&k);
    count=0;
    for(i=1;i<=n;i++) 
    {scanf("%d",&part[i]);if(part[i]!=0) zero=0;}
    for(i=1;i<=n;i++){
      for(j=i;j<=n;j++){
        if(part[i]<part[j]){
          temp=part[i];
          part[i]=part[j];
          part[j]=temp;
        }
      }
    }
   // for(i=1;i<=n;i++) 
   // {printf("%d ",part[i]);}
     if(zero) printf("%d",0);
    else{
    for(i=1;i<=n;i++){
       
       // scanf("%d",&part[i]);
         if(part[i]>=part[k]) count++;
         if(i<=k&&part[i]==0) nonpos++;
         if(i>k&&part[i]==0) nonpos++;
         if(i>k&&part[i+1]!=part[k])break;
      //printf("\n%d\t%d\t%d\t%d\t%d",i,part[i],part[k],nonpos,count);
    }
    //if(part[k]<=0) printf("%d",0);
   // else
    printf("%d",count-nonpos);
    }
    return 0;
}