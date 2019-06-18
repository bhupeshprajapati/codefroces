#include<stdio.h>
long long small(long long i,long long j){
	return(i<j?i:j);
}
long long big(long long i,long long j){
	return(i<j?j:i);
}
int main(){
	long long l,r,x,y,i,j;
	int flag=1;
	int t,count=0;
	scanf("%d",&t);
	while(t--){
		scanf("%I64d%I64d",&l,&r);
		if(l!=0&&r!=0){
		for(i=l;i<=r;i++){
	
		for(j=l;j<=r;j++){
		if(j%i==0&&i!=j){
		printf("%I64d %I64d\n",small(i,j),big(i,j));
			flag=0;
		break;
		} 
	}if(flag==0) break;
		}
	}}
	
}
