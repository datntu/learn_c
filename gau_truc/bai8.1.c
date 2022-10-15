//cấu trúc xinh viên theo mẫu
#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

int Max(int a,int b){
    if(a>b) return a;
    else return b;
}
struct sinhvien{
    char ten[100];
    char ns[100];
    char noiSinh[100];
    int toan,ly,hoa;
};
typedef struct sinhvien sv;

void in(sv a){
    printf("%s %s %s %d ",a.ten,a.ns,a.noiSinh,a.toan+a.ly+a.hoa);
}
int main(){
    int n;
    scanf("%d",&n);
    sv a[n];
    int max_diem=0;
    for(int i=0;i<n;i++){
        getchar();
        fgets(a[i].ten,sizeof(a[i].ten),stdin); a[i].ten[strlen(a[i].ten)-1]='\0';
        fgets(a[i].ns,sizeof(a[i].ns),stdin); a[i].ns[strlen(a[i].ns)-1] ='\0';
        fgets(a[i].noiSinh,sizeof(a[i].noiSinh),stdin); a[i].noiSinh[strlen(a[i].noiSinh)-1] ='\0';
        scanf("%d%d%d",&a[i].toan,&a[i].ly,&a[i].hoa);
        max_diem=Max(max_diem,a[i].toan+a[i].ly+a[i].hoa);
    }
    printf("DANH SACH THU KHOA :\n");
    for(int i=0;i<n;i++){
        if((a[i].toan+a[i].ly+a[i].hoa)==max_diem){
            in(a[i]);
            printf("\n");
        }
    }
    printf("KET QUA XET TUYEN:\n");
    for(int i=0;i<n;i++){
        in(a[i]);
        if((a[i].toan+a[i].ly+a[i].hoa)>=24){
            printf("DO\n");
        }else printf("TRUOT\n");
    }

    return 0;
}