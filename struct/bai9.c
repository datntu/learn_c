//cấu trúc phân số
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct PhanSo{
    int tu;
    int mau;
} ps;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}

ps toigian(ps a){
    ps res;
    int uc=gcd(abs(a.tu),(a.mau));
    res.tu=(a.tu)/uc;
    res.mau=(a.mau)/uc;
    return res;
}
ps tong(ps a,ps b){
    ps res;
    int mc=lcm(a.mau,b.mau);
    res.tu=a.tu*b.mau+a.mau*b.tu;
    res.mau=mc;
    return res;
}
ps hieu(ps a,ps b){
    ps res;
    int mc=lcm(a.mau,b.mau);
    res.tu=a.tu*b.mau-b.tu*a.mau;
    return res;
}


int main(){
    ps a,b;
    scanf("%d%d%d%d",&a.tu,&a.mau,&b.tu,&b.mau);
    a=toigian(a),b=toigian(b);
    ps t=tong(a,b);
    ps h=hieu(a,b);
    printf("tong cua 2 phan so la:%d/%d\n",t.tu,t.mau);
    printf("hieu cua 2 phan so la:%d/%d",h.tu,h.mau);
    return 0;
}