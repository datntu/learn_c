//xau co dau cuoi giong nhau
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    char a[100001];
    scanf("%s",a);
    int cnt[256]={0};
    for(int i=0;i<strlen(a);i++){
        cnt[a[i]]++;
    }
    long long ans=strlen(a);
    for(int i=0;i<256;i++){
        if(cnt[i]){
            ans += 1ll*(cnt[i])*(cnt[i]-1)/2;
        }
    }
    printf("%lld",ans);
    return 0;
}