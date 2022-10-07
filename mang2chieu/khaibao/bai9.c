//liệt kê số nguyê tô trong mang trận
#include "stdio.h"
#include "math.h"

int snt(int n){
    if(n<2) return 0;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}
void nhap(int n,int m,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void ktra(int n,int m,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(snt(a[i][j])==1){
                printf("%d ",a[i][j]);
            }
        }
    }
}
int main(){
    int n,m;
    int a[100][100];
    scanf("%d%d",&n,&m);
    nhap(n,m,a);
    ktra(n,m,a);
    return 0;
}