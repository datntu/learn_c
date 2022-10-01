//tim phần tử lớn nhất nhỏ nhất trong mảng 2 chiều
#include<stdio.h>

void nhap(int n,int m,int a[][10]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void xuat(int n,int m,int a[][10]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",a[i][j]);
        }
    }
}
int Fmax(int n,int m){
    if(n>m) return n;
    else return m;
}
int Fmin(int n,int m){
    if(n<m) return n;
    else return m;
}
void ktra(int n,int m,int a[][10]){
    int max=a[0][0];
    int min=a[0][0];
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            max=Fmax(max,a[i][j]);
            min=Fmin(min,a[i][j]);

        }
    }
    printf("%d \n",max);
    printf("%d ",min);
}
int main(){
    int n,m,a[10][10];
    scanf("%d%d",&n,&m);
    nhap(n,m,a);
    ktra(n,m,a);
    return 0;
}