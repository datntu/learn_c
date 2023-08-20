//đếm số loại kí tự trong xâu
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void solve(char a[]){
    int dem1=0,dem2=0,dem3=0;
    char *token =strtok(a," ");
    while(token!=NULL){
    for(int i=0;i<strlen(token);i++){
        if(isdigit(token[i])){
            dem1++;
        }else{
            if(isalpha(token[i])){
                dem2++;
            }else{
                dem3++;
            }
        }
    }
    token=strtok(NULL," ");
    }
    printf("%d %d %d",dem1,dem2,dem3);
}


int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    solve(a);
    return 0;
}