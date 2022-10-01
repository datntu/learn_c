//tính tổng các số nguyên tố trong ma trận
#include<stdio.h>
#include<math.h>

int a[100][100];
void nhap(int n,int m,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void xuat(int n,int m,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",a[i][j]);
        }
    }
}
int snt(int n){
    if(n<2) return 0;
    else {
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}
void dem(int n,int m,int a[][100]){
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(snt(a[i][j])){
                 k++;
            printf("%d ",a[i][j]);
        }
    }
   
}
    printf("%d",k);
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    nhap(n,m,a);
    dem(n,m,a);
    return 0;
}