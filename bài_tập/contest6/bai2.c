// số lớn hơn các sóo đứng trước
#include<stdio.h>

void  ktra(int n,int a[]){
    int max=a[0];
    printf("%d ",a[0]);
   for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
            printf("%d ",a[i]);
        }
   }
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    ktra(n,a);
    return 0;
}