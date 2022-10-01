//bán hàng
#include<stdio.h>

int check(int n,int a[]){
    int dem25=0;
    int dem50=0;
    for(int i=0;i<n;i++){
        if(a[i]==25) ++dem25;
        else if(a[i]==50){
            if(dem25==0) return 0;
            --dem25;
            ++dem50;
            }else {
                if(dem25==0 || dem25*25 +dem50*50 <75) return 0;
                if(dem50 !=0){
                    --dem50;
                    --dem25;
                }else{
                    dem25 -=3;
                }
            }
        }
        return 1;
    }
int main(){
    int n, a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(check(n,a)) printf("yes\n");
    else printf("no\n");
    return 0;
}