//tính tổng 4
#include<stdio.h>

long long  de_quy(int n){
    if (n==0) return 0;
    else if(n%2==0){
        return n+de_quy(n-1);
    }else return -n +de_quy(n-1);
}
int main(){
    int n; scanf("%d",&n);
    printf("%lld",de_quy(n));
    return 0;
}