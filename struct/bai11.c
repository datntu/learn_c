
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct sinhVien {
    char name[40];
    char ns[30];
    char dc[100];
    double gpa;
    int stt;
} sinhVien;

void nhap(sinhVien *a, int i) {
    fgets(a->name, sizeof(a->name), stdin);
    a->name[strcspn(a->name, "\n")] = '\0';
    fgets(a->ns, sizeof(a->ns), stdin);
    a->ns[strcspn(a->ns, "\n")] = '\0';
    fgets(a->dc, sizeof(a->dc), stdin);
    a->dc[strcspn(a->dc, "\n")] = '\0';
    scanf("%lf", &a->gpa);
    a->stt = i;
    getchar();
}

void xuat(sinhVien a) {
    printf("%s %s %s %.2lf\n", a.name, a.ns, a.dc, a.gpa);
}
int cmp(const void *a,const void *b){
    sinhVien *x =(sinhVien*)a;
    sinhVien *y =(sinhVien*)b;
    if(strcmp(x->name,y->name)!=0){
        return strcmp(x->name,y->name);
    }else{
        return x->stt - y->stt;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    sinhVien a[n];
    for (int i = 0; i < n; i++) {
        nhap(&a[i], i);
    }
    qsort(a,n,sizeof(sinhVien),cmp);
    for (int i = 0; i < n; i++) {
        xuat(a[i]);
    }
    return 0;
}
