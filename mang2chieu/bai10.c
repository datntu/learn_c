//tổng hàng và tổng cột trên ma trân
#include "stdio.h"

void nhap(int n,int m,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void tongHang(int n,int m,int a[][100],int hang){
    int sum=0;
        for(int j=0;j<m;j++){
            sum+= a[hang][j];
        }
        printf("tổng hàng %d là: %d",hang,sum);
    }
int main(){
    int n,m,hang;
    scanf("%d%d",&n,&m);
    int a[100][100];
    nhap(n,m,a);
    scanf("%d",&hang);
    tongHang(n,m,a,hang);


    return 0;
}