//xuat toan sap xep chen insertion sort
#include<stdio.h>
void nhap(int n,int a[]){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void xuat(int n,int a[]){
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
void swap(int *a,int *b){
    int tmp=*a;
        *a=*b;
        *b=tmp;
}
void insertion_sort(int n,int a[]){
    for(int i=1;i<n;i++){
        int pos=i-1,x=a[i];
        while(pos>=0 && a[pos]>x){
            a[pos+1]=a[pos];
            pos--;
        } a[pos+1]=x;
    }
}
int main(){
    int n,a[100];
    printf("nhap pt n:");scanf("%d",&n);
    nhap(n,a);
    insertion_sort(n,a);
    xuat(n,a);

    return 0;
}