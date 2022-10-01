//nhap xuat ki truc
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct sinhvien{
    char ten[100];
    char lop[100];
    float gpa;
};
typedef struct sinhvien sinhvien;

int main(){
    sinhvien x;
    printf("nhap ten: ");fgets(x.ten,sizeof(x.ten),stdin);
    printf("nhap lop: "); fgets(x.lop,sizeof(x.lop),stdin);
    printf("nhap gpa:"); scanf("%f",&x.gpa);

    printf("%s\n %s\n %.2f",x.ten,x.lop,x.gpa);


    return 0;
}