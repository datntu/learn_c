//cấu trúc sinh viên
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct SinhVien{
    char name[100];
    char ns[50];
    char dc[50];
    int toan,ly,hoa;
} sinhVien;


void nhap(sinhVien *a){
    fgets(a->name,sizeof(a->name),stdin);
    a->name[strlen(a->name)-1]='\0';
    fgets(a->ns,sizeof(a->ns),stdin);
    a->ns[strlen(a->ns)-1]='\0';
    fgets(a->dc,sizeof(a->dc),stdin);
    a->dc[strlen(a->dc)-1]='\0';
    scanf("%d%d%d",&a->toan,&a->ly,&a->hoa);
    getchar();
}
void xuat(sinhVien a){
    printf("%s\t%s\t%s\t%d%d%d",a.name,a.ns,a.dc,a.toan,a.ly,a.hoa);
}
int check(sinhVien *a){
    if(a->toan +a->ly+a->hoa>=24){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    sinhVien a[n];
    printf("nhap so luong sinh vien:\n");
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++){
        nhap(&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(check(&a[i])){
        xuat(a[i]);
        printf("\n");
        }
    }

    return 0;
}


