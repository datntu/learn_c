//sàng số  nguyên tố  eratothemer
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int n=10000000;
int prime[10000001];
void sang(){
    //buocws1; gán
    for(int i=0;i<n;i++){
        prime[i]=1;// coi tat ca cac so tu 0-n la so nguyen to
    }
    prime[0]=prime[1]=0;
    for(int i=2;i<=sqrt(n);i++){
        //nêu i la so nguyen to loi bo cac boi cua i;
        if(prime[i]==1){
            //duyet cac bọi i*i;
            for(int j=i*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
}
int main(){
    sang();
    for(int i=0;i<1000;i++){
        if(prime[i]){
            printf("%d ",i);
        }  
          }

    return 0;
}