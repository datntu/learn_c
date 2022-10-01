//nhap xuat struct
#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct hocsinh{
    char ten[100];
    char lop[100];
    double gpa;
};
typedef struct hocsinh hocsinh;
int main(){
    hocsinh x;
    printf("nhap ten:"); fgets(x.ten,sizeof(x.ten),stdin);
    printf("nhap lop:"); fgets(x.lop,sizeof(x.lop),stdin);
    printf("nhap gpa:"); scanf("%lf",&x.gpa);
    printf("%s %s %.2lf",x.ten,x.lop,x.gpa);

    return 0;
}