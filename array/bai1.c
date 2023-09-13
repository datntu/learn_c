//find sum of elements in a given array
#include<stdio.h>

int FindSum(int *a,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(a+i);
    }
    return sum;
}
int main(){
    int a[]={15,12,13,10};
    int n=sizeof(a)/sizeof(a[0]);
    int kq=FindSum(a,n);
    printf("%d ",kq);
    return 0;
}