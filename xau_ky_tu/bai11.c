//ngày sinh dùng pp chèn

#include "stdio.h"
#include "string.h"
#include "ctype.h"

void chen(char a[],int k,char kiTu){

    for(int i=strlen(a);i>k;i--){
        a[i]=a[i-1];
    }
    a[k]=kiTu;
    a[strlen(a)+1]='\0';
}

int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1] ='\0';
    if(a[1]=='/'){
        chen(a,0,'0');
    }
    if(a[4]=='/'){
        chen(a,3,'0');
    }
    printf("%s",a);


    return 0;
}