#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct sinhvien{
    char ten[100];
    char ns[100];
    char diaChi[100];
    float toan,ly,hoa;
};

typedef struct sinhvien sinhvien;

sinhvien nhap(){
    sinhvien a;
    printf("nhap ten:");fgets(a.ten,sizeof(a.ten),stdin); a.ten[strlen(a.ten)-1]='\0';
    printf("nhap ngày sinh:");fgets(a.ns,sizeof(a.ns),stdin); a.ns[strlen(a.ns)-1]='\0';
    printf("nhap địa chỉ:");fgets(a.diaChi,sizeof(a.diaChi),stdin);a.diaChi[strlen(a.diaChi)-1]='\0';
    printf("nhap diemd thi:");scanf("%f%f%f",&a.toan,&a.ly,&a.hoa);  
    return a;
}
void xuat(sinhvien a){
    printf("%s\n",a.ten);
    printf("%s\n",a.ns);
    printf("%s\n",a.diaChi);
    printf("%f %f %f\n",a.toan,a.ly,a.hoa);
}
int  tong(sinhvien a){
    int tong=0;
    tong =a.toan +a.ly+a.hoa;
    return tong;
}
void ok(sinhvien a){
    if(tong(a)>=24) printf("Đỗ\n");
    else printf("trượt\n");
}

int main(){
    int n;
    printf("nhap danh sách sinh viên:");scanf("%d",&n);
    sinhvien a[n];
    for(int i=0;i<n;i++){
        getchar();
        a[i]=nhap();
    }
    for(int i=0;i<n;i++){
        xuat(a[i]);
        ok(a[i]);
    }

    return 0;
}