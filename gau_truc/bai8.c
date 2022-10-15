//nhập xuất thông tin học sinh
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

struct sinhvien{
    char ten[100];
    char ns[50];
    char noisinh[100];
    int toan,ly,hoa;
};
typedef struct sinhvien sv;

int Max(int a,int b){
    if(a>b) return a;
    else return b;
}

sv nhap(){
    sv x;
    fgets(x.ten,sizeof(x.ten),stdin); x.ten[strlen(x.ten)-1]='\0';
    fgets(x.ns,sizeof(x.ns),stdin); x.ns[strlen(x.ns)-1] ='\0';
    fgets(x.noisinh,sizeof(x.noisinh),stdin); x.noisinh[strlen(x.noisinh)-1]='\0';
    scanf("%d %d %d",&x.toan,&x.ly,&x.hoa);
    return x;
}
void in(sv x){
    printf("%s %s %s %d ",x.ten,x.ns,x.noisinh,x.toan+x.ly+x.hoa);
}
void tong(sv x){
    int k;
    k=x.toan+x.ly+x.hoa;
    if(k>=24){
        printf("DO");
    }else printf("TRUOT");
}
int main(){
    int n;
    scanf("%d",&n);
    sv a[n];
    for(int i=0;i<n;i++){
        getchar();
        a[i]=nhap();
    }
    printf("DANH SACH THU KHOA :\n");
    int tmax=-1e9;
    for(int i=0;i<n;i++){
        tmax=Max(tmax,a[i].toan+a[i].ly+a[i].hoa);
    }
    for(int i=0;i<n;i++){
        if((a[i].toan+a[i].ly+a[i].hoa)==tmax){
            in(a[i]);
        }
        printf("\n");
    }
    printf("KET QUA XET TUYEN:\n");
    for(int i=0;i<n;i++){
        in(a[i]);
        printf(" ");
        tong(a[i]);
        printf("\n");
    }
    return 0;
}