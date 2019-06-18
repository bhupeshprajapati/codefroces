#include<stdio.h>
int main(){
  int i,n,count=0;
    scanf("%d",&n);
 if(n!=2){
  for(i=0;i<n/2;i+=2){
      if(i%2==0&&(n-i)%2==0){
          count++;
          break;
      }
  }
}
  if(count>0&&n>=0){
      printf("YES");
  }
  else printf("NO");

  return 0;
 }