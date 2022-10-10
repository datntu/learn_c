//ham length(strlen)
#include "stdio.h"
#include "string.h"

int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    printf("so ki tu trong xau la: %ld",strlen(a));
    return 0;
}