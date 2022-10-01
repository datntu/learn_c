//kiểm tra mảng tăng dần
#include<stdio.h>

int ktra(int n,int a[]){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) return 0; break;
    }
    return 1;
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(ktra(n,a)==1) printf("YES\n");
    else printf("no\n");
    return 0;
}