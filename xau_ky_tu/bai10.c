//ngày sinh
#include "stdio.h"
#include "string.h"
#include "ctype.h"

void ham_strtok(char a[]){
    char *token =strtok(a,"/");
    while(token!=NULL){
        if(strlen(token) ==1){
            printf("0%s",token);
        }else printf("%s",token);
        if(strlen(token)!=4){
            printf("/");
        }
        token =strtok(NULL,"/");
    }
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    ham_strtok(a);
    return 0;
}
