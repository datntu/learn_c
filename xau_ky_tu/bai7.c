//tính tổng các chữ số trong xâu kí tự
#include "stdio.h"
#include "string.h"
#include "ctype.h"

void in(char a[]){
    int sum=0;
    for(int i=0;i<strlen(a);i++){
        if(isdigit(a[i])){
            sum+=a[i]-'0';
        }
    }
    printf("%d",sum);
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    in(a);
    return 0;
}