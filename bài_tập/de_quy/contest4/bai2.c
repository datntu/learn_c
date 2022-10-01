//tính tổng 2
//s(n)=1^2+2^2+3^2+...+n^2
#include<stdio.h>

int dequy(int n){
    if(n==0) return 0;
    else return n*n -dequy(n-1);
}
int main(){
    int n; scanf("%d",&n);
    int k=dequy(n);
    printf("%d ",k);
    return 0;
}