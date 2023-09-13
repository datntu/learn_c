//chuẩn hóa tên 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void InThuong(char a[]){
    for(int i=1;i<strlen(a);i++){
            a[i]=tolower(a[i]);
    }
}

void SolveName(char a[]){
    char *token=strtok(a," ");
    char b[100][50];
    int dx=0;
    while(token!=NULL){
        token[0]=toupper(token[0]);
        InThuong(token);
        strcpy(b[dx],token);
        dx++;
        token=strtok(NULL," ");
    }
    for(int i=0;i<dx;i++){
        printf("%s ",b[i]);
    }
}

void SolveNumber(char b[]){
    char *token=strtok(b,"/");
    while(token!=NULL){
        if(strlen(token)==1){
            printf("0%s/",token);
        }else{
            if(strlen(token)==2){
                printf("%s/",token);
            }else{
                printf("%s",token);
            }
        }
        token=strtok(NULL,"/");
    }
}

int main(){
    char a[100],b[100];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    a[strlen(a)-1]='\0';
    b[strlen(b)-1]='\0';
    SolveName(a);
    printf("\n");
    SolveNumber(b);
    return 0;
}