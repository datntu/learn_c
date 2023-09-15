#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	return *x-*y;
}
void nhap(int *a,int n){
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
}
void xuat(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
}
void solve(int *a,int *b,int n,int m){
	int c[n+m];
	for(int i=0;i<n;i++){
		c[i]=a[i];
	}
	for(int j=0;j<m;j++){
		c[n+j]=b[j];
	}
	qsort(c,m+n,sizeof(int),cmp);
	xuat(c,m+n);
}


int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	nhap(a,n);
	nhap(b,m);
	solve(a,b,n,m);
	return 0;
}
