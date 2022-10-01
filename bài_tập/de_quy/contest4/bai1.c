//tinh tổng 1
//s(n)= 1+2+3+4+..+n
#include<stdio.h>

int dequy(int n){
    if(n==0) return 0;
    return n+dequy(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int k=dequy(n);
    printf("%d",k);

    return 0;
}

