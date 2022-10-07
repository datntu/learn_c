//cộng hai ma trận cùng cỡ
#include "stdio.h"

void nhap(int n,int m,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void in(int n,int m,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void tong(int n,int m,int a[][100],int b[][100],int c[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
int main(){
    int n,m;
    int a[100][100],b[100][100],c[100][100];
    printf("nhap so pt cua hai ma tran a,b\n");
    scanf("%d%d",&n,&m);
    nhap(n,m,a);
    nhap(n,m,b);
    tong(n,m,a,b,c);
    in(n,m,c);
}