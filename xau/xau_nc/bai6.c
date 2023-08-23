#include<stdio.h>
#include<string.h>
#include<ctype.h>

void solve(char a[]){
    char b[100][50];
    int bx=0;
    char *token=strtok(a," ");
    while(token!=NULL){
        b[bx]=token;
        bx++;
        token=strtok(NULL," ");
    }

    for(int i=0;i<bx;i++){
        printf("%s",b[i]);
    }
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    solve(a);



    return 0;
}