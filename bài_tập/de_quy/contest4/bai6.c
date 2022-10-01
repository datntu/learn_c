//dùng để quy để tính tổ hợp chạp k của n
/*y tưởng:
    bài toán con: k==1 hoặc k==n return 1;
    công thức pascal: c k của n= c k của n-1 +c k-1 của n-1 */
#include<stdio.h>
int to_hop(int n,int k){
    if(k==0 || n==k) return 1;
    else return to_hop(n-1,k)+to_hop(n-1,k-1);
}
int main(){
    int n,k;
    printf("nhâp tổ hợp chập k của n:");
    scanf("%d%d",&k,&n);
    printf("%d",to_hop(n,k));
    return 0;
}