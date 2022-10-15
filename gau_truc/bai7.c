//nhập và tính tổng,hiệu, tích, của hai số phức
#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

struct phuc{
    float thuc;
    float ao;
};
typedef struct phuc phuc;

phuc tong(phuc a,phuc b){
    phuc c;
    c.thuc=a.thuc+b.thuc;
    c.ao=a.ao+b.ao;
    return c;
}
phuc hieu(phuc a,phuc b){
    phuc c;
    c.thuc=a.thuc-b.thuc;
    c.ao =a.ao-b.ao;
    return c;
}
phuc tinh(phuc a,phuc b){
    phuc c;
    c.thuc=a.thuc*b.thuc - a.ao*b.ao;
    c.ao=a.thuc*b.ao +a.ao*b.thuc;
    return c;
}
int main(){
    phuc a,b;
    scanf("%f%f%f%f",&a.thuc,&a.ao,&b.thuc,&b.ao);
    phuc k=tong(a,b);
    phuc l=hieu(a,b);
    phuc q=tinh(a,b);
    printf("%.0f %.0f\n",k.thuc,k.ao);
    printf("%.0f %.0f\n",l.thuc,l.ao);
    printf("%.0f %.0f\n",q.thuc,q.ao);
}