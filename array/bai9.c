#include<stdio.h>

void solve(int *a,int n){
	int left=0,right=n-1;
	while(left<right){
		int tmp=*(a+left);
		*(a+left)=*(a+right);
		*(a+right)=tmp;
		left++;
		right--;
	}
}


int main(){
	int a[]={1,2,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	solve(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
