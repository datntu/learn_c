//kiểm tra mảng tăng dần
#include<stdio.h>

int ktra(int n,int a[]){
    for(int i=1;i<n;i++){
        if(a[i-1]>=a[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(ktra(n,a)==1){
        printf("true\n");
    } else printf("false\n");
    return 0;
}