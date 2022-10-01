//kiểm tra mảng có thằng dần hay không
#include<stdio.h>

int  ktra(int n,int a[]){
    int index;
    for(int i=1;i<n;i++){
        if(a[i]<=a[i-1]) index=0;
        break;
    }
    return index;
}
int main(){
    int n, a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(ktra(n,a)==0){
        printf("no\n");
    }else{
        printf("yes\n");
    }
    return 0;
}