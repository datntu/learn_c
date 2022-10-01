//tinh tong tung hang cua mang hai chieu
#include<stdio.h>

void nhap(int n,int m,int a[][10]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void ktra(int n,int m,int a[][10],int k){
    for(int i=k;i<=k;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=a[k][j];
        }
             printf("%d",sum);
}
}
int main(){
    int n,m,a[10][10];
    scanf("%d%d",&n,&m);
    nhap(n,m,a);
    int k;
    scanf("%d",&k);
    ktra(n,m,a,k);
    return 0;
}