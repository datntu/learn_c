//viet và tính tổng ,hiệu của phân số tối gianr( xây dựng cấu trúc)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct ps{
    int tu;
    int mau;
};
typedef struct ps ps;

int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/(gcd(a,b));
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
    res.tu =mc/a.mau *a.tu +mc/b.mau *b.tu;
    return res;
}
int main(){
    ps a,b;
    printf("nhap tu ps a:"); scanf("%d",&a.tu);
    printf("nhap mau ps a"); scanf("%d",&a.mau);
    printf("nhap tu ps b:"); scanf("%d",&b.tu);
    printf("nhap mau ps b:"); scanf("%d",&b.mau);
    a=toigian(a);
    b=toigian(b);
    printf("%d/%d\n %d/%d\n",a.tu,a.mau,b.tu,b.mau);
    ps t =tong(a,b);
    printf("%d/%d",t.tu,t.mau);
    return 0;
}