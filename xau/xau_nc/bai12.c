//chuẩn hóa tên
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void change(char a[]){
    for(int i=1;i<strlen(a);i++){
        a[i]=tolower(a[i]);
    }
}

void solve(char a[]){
    char *token=strtok(a," ");
    char b[100][50];
    int dx=0;
    while(token!=NULL){
        token[0]=toupper(token[0]);
        change(token);
        strcpy(b[dx],token);
        dx++;
        token=strtok(NULL," ");
    }
    printf("%s,",b[2]);
    for(int i=0;i<=1;i++){
        printf("%s ",b[i]);
    }
}

int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    solve(a);
    return 0;
}