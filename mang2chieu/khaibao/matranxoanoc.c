#include "stdio.h"

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    int h0=0,h1=n-1,c0=0,c1=n-1;
    int dem=1;
    while(dem<=n*n){
        for(int i=c0;i<=c1;i++){
            a[h0][i]=dem++;
        }
        ++h0;
        for(int i=h0;i<=h1;i++){
            a[i][c1]=dem++;
        }
        --c1;
        for(int i=c1;i>=c0;i--){
            a[h1][i]=dem++;
        }
        --h1;
        for(int i=h1;i>=h0;i--){
            a[i][c0]=dem++;
        }
        ++c0;
    }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    return 0;
}