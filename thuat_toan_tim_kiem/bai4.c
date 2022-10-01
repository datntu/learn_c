//kiểm tra số nguyên tố có nhiều test
#include<stdio.h>
#include<math.h>


int prime[1000001];
void sang(){
    for(int i=0;i<1000000;i++){
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(int i=2;i<sqrt(1000000);i++){
        if(prime[i]==1){
            for(int j=i*i;j<1000000;j+=i){
                prime[j]=0;
            }
        }
}
}
int main(){
    sang();
    int t;
    printf("nhap so luong test can kiem tra:"); scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        if(prime[n]==1) printf("yes\n");
        else printf("No\n");
    }


    return 0;
}