//hoán vị đường chéo
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
void hoanVi(int n,int a[][100]){
    for(int i=0;i<n;i++){
        swap(&a[i][i],&a[i][n-i-1]);
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
    hoanVi(n,a);
    in(n,a);
    return 0;
}