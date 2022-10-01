//chuyển nhị phan sang thập phân
#include<stdio.h>
#include<math.h>
void ham(int n){
    int k=0;
    int p=0;
    while(n>0){
        k+= (n%10)*pow(2,p);
        ++p;
        n/=10;
    }
    printf("%d",k);
}
int main(){ 
    int n;scanf("%d",&n);
        ham(n);
    return 0;
}