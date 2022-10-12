//tí và tèo

#include "stdio.h"
#include "string.h"
#include "ctype.h"

int check(char a[],char b[]){
    if(strlen(a)!=strlen(b)){
        return 0;
    }
    for(int i=0;i<strlen(a);i++){
        if(toupper(a[i])!=toupper(b[i])){
            return 0;
        }
    }
    return 1;
}
void solve(char a[]){
    int sum=0;
    char *token=strtok(a," ");
    while(token!=NULL){
        if(check(token,"28teach")){
            sum++;
        }
        token=strtok(NULL," ");
    }
    printf("%d",sum);
}


int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1] ='\0';
    solve(a);
    return 0;
}