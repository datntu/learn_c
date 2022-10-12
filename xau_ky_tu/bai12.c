//đếm các từ in hoa trong xâu s
#include "stdio.h"
#include "string.h"
#include "ctype.h"

int check(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(islower(a[i])){
            return 0;
        }
    }
    return 1;
}
void dem(char a[]){
    char *token=strtok(a," ");
    int sum=0;
    while(token!=NULL){
        if(check(token)){
            sum++;
        }
        token=strtok(NULL," ");  
    }
    printf("%d",sum);
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    dem(a);
    return 0;
}