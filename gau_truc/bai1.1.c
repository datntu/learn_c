//lam lại cấu trúc phân số

#include "stdio.h"
#include "string.h"
#include "math.h"
#include "stdlib.h"

struct ps{
    int tu,mau;
};
typedef struct ps ps;

int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(a,a%b);
}
int lcm(int a,int b){
    retun a*b/gcd(a,b);
}

ps toigian(ps a){
    ps res;
    int uc=gcd(abs(a.tu),abs(a.mau));
    res.tu=a.tu/uc;
    res.mau=a.mau/uc;
    return res;
}
ps tong(ps a,ps b){
    ps res;
    int mc=lcm(a.mau,b.mau);
    res.mau=mc;
    res.tu=mc/a.mau*a.tu +mc/b.mau*b.tu;
    return toigian(res);
}
ps hieu(ps a,ps b){
    ps res;
    int mc=lcm(a.mau,b.mau);
    res.mau=mc;
    res.tu=mc/a.mau*a.tu -mc/b.mau*b.tu;
    return toigian(res);
}
int main(){
    ps a,b;
    scanf("%d%d%d%d",&a.tu,&a.mau,&b.tu,&b.mau);
    a=toigian(a),b=toigian(b);
    printf("%d/%d\n%d/%d\n",a.tu,a.mau,b.tu,b.mau); 
    ps t=tong(a,b);
    ps k=hieu(a,b); 
    return 0;
}