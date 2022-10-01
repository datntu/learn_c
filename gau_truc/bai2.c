//ham nhap xuat kieu cua truc
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct sinhvien{
    char ten[100];
    char lop[100];
    float gpa;
};
typedef struct sinhvien sinhvien;

sinhvien nhap(){
    sinhvien x;
    printf("nhap ten:"); fgets(x.ten,sizeof(x.ten),stdin);
    printf("nhap lop:"); fgets(x.lop,sizeof(x.lop),stdin);
    printf("nhap gpa:"); scanf("%f",&x.gpa);
    return x;
}
void xuat(sinhvien x){
    printf("%s\n",x.ten);
    printf("%s\n",x.lop);
    printf("%.2f",x.gpa);
}
int main(){
    sinhvien a[1000];
    int n;
    printf("nhap so sinh vien: "); scanf("%d",&n);
 
    for(int i=0;i<n;i++){
        getchar();
        a[i]=nhap();
        
    }
    for(int i=0;i<n;i++){
        xuat(a[i]);
    }
    return 0;
}