//hoán vị hai hàng của ma trận
#include "stdio.h"
void nhap(int n,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void swap(int *n,int *m){
    int tmp=*n;
    *n=*m;
    *m=tmp;
}
void hoanViHaiHang(int n,int hangA,int hangB,int a[][100]){
    for(int i=0;i<n;i++){
        swap(&a[hangA][i],&a[hangB][i]);
    }
}
void in(int n,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[100][100];
    nhap(n,a);
    int hangA,hangB;
    scanf("%d%d",&hangA,&hangB);
    hoanViHaiHang(n,hangA,hangB,a);
    in(n,a);
    return 0;
}