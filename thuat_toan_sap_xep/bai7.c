//thuat toan sap xep chen
#include<stdio.h>

void insert(int n,int a[]){
    for(int i=1;i<n;i++){
        int j=i-1;
        int t=a[i];
        while(j>=0 && a[j]>t){
            a[j+1]=a[j];
            j--;
        }
            a[j+1]=t;
    }
}
int main(){
    int n;
    int a[100];
    printf("nhap so phan tu N:"); scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    insert(n,a);
    for(int i=0;i<n;i++) printf("%d ",a[i]);

    return 0;
}