//tính s=1/1+1/2+1/3 +...1/n bằng đệ quy
#include<stdio.h>

double tong(int n){
    if(n==1) return 1;
    else
     return 1.0/n +tong(n-1);
}
int main(){
    int n; scanf("%d",&n);
    printf("%.3lf",tong(n));
    return 0;
}