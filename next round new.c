#include<stdio.h>
int countzero(int i,int *part);
int main(){
    int n,i,j,k,part[100],count,nonpos=0,temp;
    int zero=1;
    scanf("%d%d",&n,&k);
    count=k;
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
    if(zero) printf("%d",0);
    else{
        for(i=k+1;i<n+1;i++){
             if(part[i]==part[k]) count++;
             else break;
             //if(i>k&&part[i+1]!=part[k])break;
        }
        nonpos=countzero(i,part);
        printf("%d",count-nonpos);
    }
        
    return 0;
}
int countzero(int i,int *part){
    int count=0;
    while(i--){
        if(part[i]==0){
            count++;
        }
    }
    return count;
}

//learnings
//1. sort the array before any operation that must assume the array to be sorted
//2. if the solution is becoming complicated due to amendments, then go back and rethink about the solution from the basics.
//3. Thereafter code it again from the starting.
// YESTERDAY'S LEARNINGS
//1. For reducing the time in linear increment in loops use modular incrementation. c+=a/b; b=b%a; <- something like this.
//2. If serieses are formed int the solutions then solve it on paper first because it reduces the problem to simple formulae.
