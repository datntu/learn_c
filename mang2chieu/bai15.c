//đếm các số nguyên tố trên đường chéo chính và đường chéo phu
#include "stdio.h"
#include "math.h"
void nhap(int n,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int snt(int n){
    if(n<2) return 0;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}
void ktra(int n ,int a[][100]){
    int dem=0;
    for(int i=0;i<n;i++){
        if(snt(a[i][i])==1 ){
            dem++;
        }if(snt(a[i][n-i-1])==1 ){
            dem++;
    }
    }
    if(n%2==1){
        if(snt(a[n/2][n/2])==1){
            dem--;
        }
    }

    printf("%d\n",dem);

}
int main(){
    int n,a[100][100];
    scanf("%d",&n);
    nhap(n,a);
    ktra(n,a);
    return 0;
}