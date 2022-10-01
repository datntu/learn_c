//sắp xếp sinh vieentheo gpa
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct sinhvien{
    char ten[100];
    char ns[100];
    char diaChi[100];
    float gpa;
};
typedef struct sinhvien sinhvien;

sinhvien nhap(){
    sinhvien a;
    printf("nhap ten: ");fgets(a.ten,sizeof(a.ten),stdin); a.ten[strlen(a.ten)-1]='\0';
    printf("nhap ns: "); fgets(a.ns,sizeof(a.ns),stdin); a.ns[strlen(a.ns)-1]='\0';
    printf("nhap địa chỉ: ");fgets(a.diaChi,sizeof(a.diaChi),stdin);a.diaChi[strlen(a.diaChi)-1]='\0';
    printf("nhap gpa: "); scanf("%f",&a.gpa);
    return a;
}
void xuat(sinhvien a){
    printf("%s\n",a.ten);
    printf("%s\n",a.ns);
    printf("%s\n",a.diaChi);
    printf("%f\n",a.gpa);
}
int cmp(const void  *a,const void *b){
    sinhvien *x=(sinhvien*)a;
    sinhvien *y=(sinhvien*)b;
    if(x->gpa >y->gpa){
        return 1;
    }
    return -1;
}
int main(){
    int n;
    printf("nhập số sinh viên: ");scanf("%d",&n);
    sinhvien a[n];
    for(int i=0;i<n;i++){
        getchar();
        a[i]=nhap();
    }
    for(int i=0;i<n;i++){
        xuat(a[i]);
    }


    return 0;
}