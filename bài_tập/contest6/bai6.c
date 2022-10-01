//số lơn hơn các số đứng trước
// hay liệt kê tất cả các phần tử  lớn hơn số dứng trước nó
#include<stdio.h>

/*void ktra(int n,int a[]){
    for(int i=0;i<n;i++){
        int k=1;
        for(int j=0;j<i;j++){
            if(a[i]<= a[j]){
                k=0;
                break;
            }
        }
    if(k==1) printf("%d ",a[i]);
}
}*/
// cách nhanh hơn (hay)
void ktra(int n,int a[]){
        int max=a[0];
        printf("%d ",a[0]);
    for(int i=1;i<n;i++){
        if(a[i]>max){
            printf("%d ",a[i]);
            max=a[i];
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