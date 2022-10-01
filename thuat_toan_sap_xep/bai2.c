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
void bubble_sort(int n,int a[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]) swap(&a[j],&a[j+1]);
        }
    }
}
int main(){
    int n,a[100];
    printf("nhap pt n:");scanf("%d",&n);
    nhap(n,a);
    bubble_sort(n,a);
    xuat(n,a);

    return 0;
}