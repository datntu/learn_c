//kí tự xuất hiện nhiều nhất trong xâu
#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"
char a[1000005];
int main(){
    fgets(a,sizeof(a),stdin); a[strlen(a)-1]='\0';
    int cnt[256]={0};
    for(int i=0;i<strlen(a);i++){
        cnt[a[i]]++;
    }
    int max=0,min=1e9;
    char charmax,charmin;
    for(int i=0;i<256;i++){
        if(cnt[i]>=max){
            max=cnt[i];
            charmax=(char)i;
        }
        if(cnt[i]<=min && cnt[i]!=0){
            min=cnt[i];
            charmin=(char)i;
        }
    }
    printf("%c %d\n",charmax,max);
    printf("%c %d\n",charmin,min);
    return 0;
}