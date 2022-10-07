//tính tích của hai ma trận
/*chú ý:công thức a[n][m]x b[p][q] <==> m==p
công thức tính c[n][q]=a[i][m]xb[m][j]
*/
#include "stdio.h"

void nhap(int n,int m,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void in(int n,int m,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
void nhan(int n,int p,int m,int a[][100],int b[][100],int c[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            c[i][j]=0;
            for(int k=0;k<m;k++){
                c[i][j]=a[i][k] *b[k][j];
            }
        }
    }
}
int main(){
    int n,m;
    int a[100][100],b[100][100],c[100][100];
    int p;
    scanf("%d%d%d",&n,&m,&p);
    nhap(n,m,a);
    nhap(m,p,b);
    nhan(n,p,m,a,b,c);
    in(n,p,c);
    return 0;
}