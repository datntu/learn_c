//tổng 2 số trong mảng có giá trị gần 0 nhất
#include<stdio.h>
#include<stdlib.h>

void solve(int *a,int n){
    int min_sum,sum,min_l,min_r;
     min_l=0;
     min_r=1;
    min_sum=*(a+0) + *(a+1);
    for(int l=0;l<n-1;l++){
        for(int r=l+1;r<n;r++){
            sum=*(a+l)+*(a+r);
            if(abs(min_sum)>abs(sum)){
                min_sum=sum;
                min_l=l;
                min_r=r;
            }
        }
    }
    printf("2 số có tổng gần bằng 0 là :%d %d",*(a+min_l),*(a+min_r));
}


int main(){
    int a[]={1, 60, -10, 70, -80, 85};
    int n=sizeof(a)/sizeof(a[0]);
    solve(a,n);
    return 0;
}