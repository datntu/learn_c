//sap xep sinh vien theo gpa
#include "stdio.h"
#include "string.h"
#include "ctype.h"

struct sinhvien{
    char ten[100];
    char ns[100];
    char dc[100];
    float gpa;
};
typedef struct sinhvien sv;

void selectionsort(sv a[],int n){
    for(int i=0;i<n;i++){
        int  min=i;
        for(int j=i+1;j<n;j++){
            if(a[min].gpa>a[j].gpa){
                min=j;
            } 
        } struct sinhvien  tmp = a[i];
                a[i]=a[min];
                a[min]=tmp;
    }
}
void in(sv x){
    printf("%s %s %s %.2f\n",x.ten,x.ns,x.dc,x.gpa);
}

int main(){
    int n;
    scanf("%d",&n);
    sv a[n];
    for(int i=0;i<n;i++){
        getchar();
        fgets(a[i].ten,sizeof(a[i].ten),stdin); a[i].ten[strlen(a[i].ten)-1] ='\0';
        fgets(a[i].ns,sizeof(a[i].ns),stdin); a[i].ns[strlen(a[i].ns)-1]='\0';
        fgets(a[i].dc,sizeof(a[i].dc),stdin); a[i].dc[strlen(a[i].dc)-1]='\0';
        scanf("%f",&a[i].gpa);
    }
    selectionsort(a,n);
    for(int i=0;i<n;i++){
        in(a[i]);
    }
    return 0;
}