//dem so lon hon x va so nho hon x
#include<stdio.h>

 void nhap(int n,int a[]){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void xuat(int n,int a[]){
    for(int i=0;i<n;i++) printf("%d",a[i]);
}
void dem(int n,int a[],int x){
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(a[i]>=x) c1++;
        else c2++;
    }
    printf("so pt la hon %d la %d\n",x,c1);
    printf("so pt nho hon %d la %d",x,c2);
}
int main(){
    int n,a[100];
    printf("nhap so pt :"); scanf("%d",&n);
    int x;
    nhap(n,a);
    scanf("%d",&x);
    dem(n,a,x);
    return 0;
}