// nhap xuat mang hai chieu
#include<stdio.h>

void nhap(int n,int m ,int a[][10]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
    }
}
void xuat(int n,int m,int a[][10]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n,m,a[10][10];
    scanf("%d%d",&n,&m);
    nhap(n,m,a);
    xuat(n,m,a);
    return 0;
}