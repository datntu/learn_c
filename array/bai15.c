//học cách define thì sao , họ vảo dễ nhưng tôi thấy cần phải học
#include<stdio.h>
#define for(i,n) for(int i=0;i<n;i++)

void nhap(int *a,int n){
    for(i,n){
     scanf("%d",a+i);
    }
}
void xuat(int *a,int n){
    for(i,n){
        printf("%d ",*(a+i));
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    nhap(a,n);
    xuat(a,n);
    return 0;
}