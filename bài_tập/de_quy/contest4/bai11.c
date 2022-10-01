//chuyển hệ thập phân sang nhị phân

#include<stdio.h>

void ham(int n){
    //đệ quy
    if(n==0) return ;
    else{
        ham(n/2);
        printf("%d",n%2);
    }
}
int main(){
    int n; 
    scanf("%d",&n);
    ham(n);
    return 0;
}