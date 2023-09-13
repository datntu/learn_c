#include<stdio.h>
int check(int *a,int n,int x){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(*(a+i)+*(a+j)==x){
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	int a[]={0,-1,2,-3,1};
	int n=sizeof(a)/sizeof(a[0]);
	int x;
	scanf("%d",&x);
	if(check(a,n,x)){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
