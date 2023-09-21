//số lần thay đổi khi khi sắp xếp tăng dần
#include<stdio.h>

int solve(int *a,int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int a[]={1,20,6,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int kq=solve(a,n);
    printf("%d ",kq);
    return 0;
}