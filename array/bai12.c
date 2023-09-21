//learders in an array
#include<stdio.h>

void solve(int *a,int n){
	int max_from_right=*(a+n-1);
	printf("%d ",max_from_right);
	for(int i=n-2;i>=0;i--){
		if(max_from_right<*(a+i)){
			max_from_right=*(a+i);
			printf("%d ",max_from_right);
		}
	}
}

int main(){
	int a[]={1,2,3,4,5,2};
	int n=sizeof(a)/sizeof(a[0]);
	solve(a,n);
	return 0;
}
