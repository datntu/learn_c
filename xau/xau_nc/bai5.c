//tim giao và hợp của 2 xâu 
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void solve(char a[],char b[]){
    int giao[256]={0},hop[256]={0};
    for(int i=0;i<strlen(a);i++){
            giao[a[i]]=1;
            hop[a[i]]=1;
    }
    for(int i=0;i<strlen(b);i++){
        hop[b[i]]=1;
        if(giao[b[i]]==1){
            giao[b[i]]=2;
        }
    }
    for(int i=0;i<256;i++){
        if(giao[i]==2){
            printf("%c",i);
        }
    }
    printf("\n");
    for(int i=0;i<256;i++){
        if(hop[i]){
            printf("%c",i);
        }
    }
}

int main(){
    char a[10005],b[10005];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    a[strlen(a)-1]='\0';
    b[strlen(b)-1]='\0';
    solve(a,b);
    return 0;
}