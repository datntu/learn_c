#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int check(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(!isdigit(a[i])){
            return 0;
        }
    }
    return 1;
}

void solve(char a[]){
    char b[100][50];
    int bx=0;
    char *token=strtok(a," ");
    while(token!=NULL){
        if(check(token)){
        strcpy(b[bx],token);
        }
        bx++;
        token=strtok(NULL," ");
    }
    int sum=0;
    for(int i=0;i<bx;i++){
        sum+=atoi(b[i]);
    }
    printf("%d",sum);
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    solve(a);
    return 0;
}