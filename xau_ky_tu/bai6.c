//in ra so dung giua sữ dụng xâu kí tự
#include "stdio.h"
#include "string.h"
#include "ctype.h"

void ktra(char a[]){
    if(strlen(a)%2==0){
        printf("NO Ffin\n");
    }else{
        printf("%c\n",a[strlen(a)/2]);
    }
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
     a[strlen(a)-1]='\0';
    printf("%ld\n",strlen(a));
     ktra(a);
    return 0;
}