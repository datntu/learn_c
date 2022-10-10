//số đẹp(nếu số đứng sau hơn số đứng trước một đơn vị)
#include "stdio.h"
#include "string.h"
#include "ctype.h"

int  ktra(char a[]){
    for(int i=0;i<strlen(a)-1;i++){
        if(a[i]!=a[i+1]-1){
            return 0;
            break;
        }
    } return 1;
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1] ='\0';
    if(ktra(a)){
        printf("%s",a);
    }else{
        printf("so xau vcl");
    }



    return 0;
}