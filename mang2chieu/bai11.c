//tìm số lớn nhất số nhỏ nhất trong ma trận
#include "stdio.h"

void nhap(int n,int m,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int smax(int a,int b){
    if(a>b) return a;
    else return b;
}
int smin(int a,int b ){
    if(a<b) return a;
    else return b;
}
void find_max_min(int n,int m,int a[][100]){
    int max=-1e9,min=1e9;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            max = smax(max,a[i][j]);
            min = smin(min,a[i][j]);
        }
    }
    printf("%d\n",max);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==max){
                printf("%d %d\n",i,j);
            }
        }
    }
    printf("%d\n",min);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==min){
                printf("%d %d\n",i,j);
            }
        }
    }
}

int main(){ 
    int n,m;
    int a[100][100];
    scanf("%d%d",&n,&m);
    nhap(n,m,a);
    find_max_min(n,m,a);
    return 0;
}