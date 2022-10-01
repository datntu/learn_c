//chuyển hệ thập phân sang hệ thập lục phân
#include<stdio.h>
void ham(int n){
    if(n<16){
        if(n<=9) printf("%d",n);
        else printf("%c",n+55);
    }
    else{
        ham(n/16);
        int k=n%16;
        if(k<=9) printf("%d",k);
        else printf("%c",k+55);
    }
}
int main(){
    int n; scanf("%d",&n);
    ham(n);
    return 0;
}