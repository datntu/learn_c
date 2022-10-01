//tìm số nhỏ nhất và đếm số lần xuất hiện của số đó
#include<stdio.h>
#include<math.h>

void nhap(int n,int a[]){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void xuat(int n,int a[]){
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
int nhoNhat(int n,int a[]){
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min) min=a[i];
    }
    return min;
}

int main(){
    int n,a[100];
    printf("nhap so pt trong mang: "); scanf("%d",&n);
    nhap(n,a);
    int find_min=nhoNhat(n,a);
    printf("nho nat trong mang la:%d\n",find_min);
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==find_min) count++;
    }
    printf(" so lan xuat hien so nho nhat tron mang la :%d",count);
    return 0;
}