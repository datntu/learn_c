//kiểm tra xâu con
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char a[100],b[100];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    a[strlen(a)-1]='\0';
    b[strlen(b)-1]='\0';
    if(strstr(a,b)!=NULL){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}