//tính tổng các chữ số của n bằng đệ quy
// công thức truy hồi
// if N<10 return n;
// return n%10 + dequy(n/10);
#include<stdio.h>

void dequy(int n){
    if(n<10)
     return n;
    else{ 
     return (n % 10) + dequy(n/10);
} }
int main(){
    int n;scanf("%d",&n);
    dequy(n);
    return 0;
}