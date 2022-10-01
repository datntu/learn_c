#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct phuc{
    float thuc;
    float ao;
};
typedef struct phuc phuc;

phuc tong(phuc a,phuc b){
    phuc c;
        c.thuc=a.thuc +b.thuc;
        c.ao=a.ao +b.ao;
        return c;
}
phuc tich(phuc a,phuc b){
    phuc s;
    s.thuc= a.thuc*b.thuc - a.ao*b.ao;
    s.ao= b.thuc*a.ao +a.thuc*b.ao;
    return s;
}

int main(){
    phuc a,b;
    printf("nhap phan thuc cua a:"); scanf("%f",&a.thuc);
    printf("nhap phan ao cua a:"); scanf("%f",&a.ao);
    printf("nhap phan thu cua b:"); scanf("%f",&b.thuc);
    printf("nhap phan ao cua b:"); scanf("%f",&b.ao);
    phuc k;
        k=tong(a,b);
    phuc w; w=tich(a,b);
    printf("tong so thuc la:%.2f\n",k.thuc);
    printf("tong so ao la:%.2f\n",k.ao);
    printf("tich của hai số ảo là : %.2f +%.2f\n",w.thuc,w.ao);
    return 0;
}