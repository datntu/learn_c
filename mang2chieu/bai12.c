//đếm số thuận nghịch trong tam giá dưới của ma trận vuông
#include "stdio.h"

int stn(int n){
    int lat=0,temp=n;
    while(n>0){
        lat=lat*10+n%10;
        n/=10;
    }
    if(lat==temp) return 1;
    else return 0;
}
void nhap(int n,int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void tamGacDuoi(int n,int a[][100]){
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(stn(a[i][j])==1){
                ++dem;
            }
        }
    }
    printf("%d",dem);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[100][100];
    nhap(n,a);
    tamGacDuoi(n,a);

    return 0;
}