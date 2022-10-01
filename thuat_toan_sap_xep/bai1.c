//sap xep chọn
#include<stdio.h>
void nhap(int n,int a[]){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void xuat(int n,int a[]){
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
void swap(int *a,int *b){
    int atm;
    atm=*a;
    *a=*b;
    *b=atm;
}
void Selection_sort(int n,int a[]){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]) min=j;
        }
        swap(&a[min],&a[i]);
    }
}

int main(){
    int n,a[100];
    printf("nhap so pt trong mang:");scanf("%d",&n);
    nhap(n,a);
    Selection_sort(n,a);
    xuat(n,a);
    return 0;
}