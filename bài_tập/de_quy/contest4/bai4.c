//tinh giai thừa bằng đệ quy
#include<stdio.h>

int de_quy(int n){
    if(n==0) return 1;
    else return n*de_quy(n-1);
}
int main(){
    int n;scanf("%d",&n);
    printf("%d",de_quy(n));
    return 0;
}