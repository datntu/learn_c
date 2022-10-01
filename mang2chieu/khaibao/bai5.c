//kiểm tra số chính phương trong ma traanj
#include "stdio.h"
int a[100][100];
int scp(int n){
    int i=0;
    while(i*i<=n){
        if(i*i==n){
            return 1;
        }
        ++i;
    }
    return 0;
}
void nhap(int n,int m,int a[][100]){
    for(int i;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void ktra(int n,int m,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(scp(a[i][j])){
                printf("%d",a[i][j]);
            }
        }
    }
}
int main(){ 
    int n,m;
    scanf("%d%d",&n,&m);
    nhap(n,m,a);
    ktra(n,m,a);
    return 0;
}