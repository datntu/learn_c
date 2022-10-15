//tần xuát xuất hiện của một kí tự
#include "stdio.h"
#include "string.h"
#include "ctype.h"

void solve(char a[]){
        int cnt[256]={0};
        for(int i=0;i<strlen(a);i++){
            cnt[a[i]]++;
        }
        for(int i=0;i<256;i++){
            if(cnt[i]){
                printf("%c %d\n",i,cnt[i]);
            }
        }
        printf("\n");
        for(int i=0;i<strlen(a);i++){
            if(cnt[a[i]]){
                printf("%c %d\n",a[i],cnt[a[i]]);
                cnt[a[i]]=0;
            }
        }
}
int main(){
    char a[10005];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1] ='\0';
    solve(a);
    return 0;
}