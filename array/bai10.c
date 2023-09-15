//dịch trái với phần tử d 
#include<stdio.h>

void solve(int *a,int n,int d){
	int b[n];
	int k=0;
	for(int i=d;i<n;i++){
		b[k]=*(a+i);
		k++;
	}
	for(int i=0;i<d;i++){
		b[k]=*(a+i);
		k++;
	}
	for(int i=0;i<n;i++){
		printf("%d ",*(b+i));
	}

}
int main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int d; scanf("%d",&d);
	solve(a,n,d);
	return 0;
}	
