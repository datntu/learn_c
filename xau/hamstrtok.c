#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    char *token;
    token=strtok(a," ");
    while(token!=NULL){
        printf("%s\n",token);
        token =strtok(NULL," ");
    }
    return 0;
}