//in hoa ,int  thường
#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

void inHoa(char a[]){
    for(int i=0;i<strlen(a);i++){
        a[i]=toupper(a[i]);
    }
}
void inThuong(char a[]){
    for(int i=0;i<strlen(a);i++){
        a[i]=tolower(a[i]);
    }
}
int main(){
    char a[10005];
    fgets(a,10005,stdin);
    a[strlen(a)-1]='\0';
    inHoa(a);
    printf("%s",a);
    inThuong(a);
    printf("\n");
    printf("%s",a);
    return 0;
}