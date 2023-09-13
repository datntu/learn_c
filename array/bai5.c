//Largest Sum Contiguous Subarray
#include<stdio.h>
#include<limits.h>

int maxSubArraySum( int a[],int n){

    if(n==1){
        return a[0];
    }
    int m=n/2;
    int left_max=maxSubArraySum(a,m);
    int right_max=maxSubArraySum(a+m,n-m);
    int left_sum=INT_MIN,right_sum=INT_MIN,sum=0;
    for(int i=m;i<n;i++){
        sum+=a[i];
        right_sum = (right_sum > sum) ? right_sum : sum;
    }
    sum=0;
    for(int i=m-1;i>=0;i--){
        sum+=a[i];
         left_sum = (left_sum > sum) ? left_sum : sum;
    }
    int cross_max=left_sum+right_sum;
    return (cross_max > (left_max > right_max ? left_max : right_max)) ? cross_max : (left_max > right_max ? left_max : right_max);
}
int main(){
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(a)/sizeof(a[0]);
    int max_sum=maxSubArraySum(a,n);
    printf("%d ",max_sum);
    return 0;
}