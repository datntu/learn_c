//in phan tu
#include<stdio.h>

void nhap(int n,int a[]){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void in_PhanTu(int n,int a[]){
    for(int i=0;i<n;i++){
        if(i%2==0 && a[i]%2==0){
            printf("%d\n",a[i]);
        }
    }
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    nhap(n,a);
    in_PhanTu(n,a);
    return 0;
}