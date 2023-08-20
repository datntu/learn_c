//tần xuất suât hiện của các kí tự
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void solve(char a[]){
     int b[256]={0};
     for(int i=0;i<strlen(a);i++){
        b[a[i]]++;
     }
     for(int i=0;i<256;i++){
        if(b[i]){
            printf("%c %d\n",i,b[i]);
        }
     }
}

int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    solve(a);
    return 0;
}