//tìm phần tử nhỏ nhất và lón nhất in ra vị trí của nó
#include "stdio.h"
int a[100][100];
void nhap(int n,int m,int a[][100]){
    for(int i;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void ktra(int n,int m,int a[][100]){
    int min=a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
    }
    printf("%d\n",min);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==min){
                printf("vị trí số nhỏ nhất là %d,%d",i,j);
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