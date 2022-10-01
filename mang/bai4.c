//liệt kê và đếm số fibonasi
#include<stdio.h>
#include<stdlib.h>
#define ll long long
ll f[100]; // lưa lại số fibonasi từ 0-92
void ktao(){
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=92;i++){
        f[i]=f[i-1]+f[i-2];
    }
}
int check (ll n){
    for(int i=0;i<=92;i++){
        if(f[i]==n){
            return 1;
        }
    }return 0;
}
int main(){
    ktao();
    int n;
     scanf("%d",&n);
    ll a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    int ok =0;
    for(int i=0;i<n;i++){
        if(check(a[i])){
            printf("%lld",a[i]);
            ok=1;
        }
    }
    if(ok==0) printf("none");


    return 0;
}