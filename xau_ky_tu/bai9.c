//chèn dấu phẩy 
#include "stdio.h"
#include "string.h"
#include "ctype.h"

void ktra(char a[]){
    char res[1000];
    int index=0;
    int count =0;
    for(int i=strlen(a)-1;i>=0;i--){
        ++count;
        res[index]=a[i];
        ++index;
        if(count%3==0 && i!=0){
            res[index]=',';
            ++index;
        }
    }
    for(int i=strlen(res)-1;i>=0;i--){
        printf("%c",res[i]);
    }
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1] ='\0';
    ktra(a);
    return 0;
}