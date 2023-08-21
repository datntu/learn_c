//ki tự xuất hiện nhiều nhất trong xâu
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void solve(char a[]){
    int b[256]={0};
    int min=1e9,max=0;
    for(int i=0;i<strlen(a);i++){
        b[a[i]]++;
    }
    char charMax,charMin;
    for(int i=0;i<256;i++){
        if(b[i]>=max){
            max=b[i];
            charMax=(char)i;
        }
        if(b[i]<=min && b[i]!=0){
            min=b[i];
            charMin=(char)i;
        }
    }
    printf("%c %d\n",charMax,max);
    printf("%c %d",charMin,min);
}


int main(){
    char a[10005];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1] ='\0';
    solve(a);
    return 0;
}