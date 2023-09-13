//sinh viên khá
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct sinhVien{
    char name[50];
    char ns[20];
    char dc[20];
    double gpa;
} sinhVien;

void nhap(sinhVien *a){
    fgets(a->name,sizeof(a->name),stdin);
    a->name[strcspn(a->name, "\n")] = '\0';
    fgets(a->ns,sizeof(a->ns),stdin);
    a->ns[strcspn(a->ns,"\n")] ='\0';
    fgets(a->dc,sizeof(a->dc),stdin);
    a->dc[strcspn(a->dc,"\n")] ='\0';
    scanf("%lf",&a->gpa);
    getchar();
}

void xuat(sinhVien a){
    printf("%s %s %s %.2lf",a.name,a.ns,a.dc,a.gpa);
}

int check(sinhVien a){
    if(strcmp(a.dc,"Nam Dinh")==0 && a.gpa>=2){
        return 1;
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    sinhVien a[n];
    for(int i=0;i<n;i++){
        nhap(&a[i]);
    }
    for(int i=0;i<n;i++){
        if(check(a[i])){
            xuat(a[i]);
        }
    }
    return 0;
}
