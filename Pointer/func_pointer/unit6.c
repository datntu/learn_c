#include<stdio.h>

void nhap(int *a,int n){
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
}

void xuat(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d\t",*(a+i));
	}
}


int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	nhap(a,n);
	xuat(a,n);


}
