//cho xâu kí tự hay đếm các chữ cái, chứ xố và cacs kí tự khác
#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

void dem(char a[]){
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<strlen(a);i++){
        if(isdigit(a[i])){
            ++sum1;
        }else{
            if(isalpha(a[i])){
                ++sum2;
            }else{
                ++sum3;
            }
        }
    }
    printf("%d %d %d",sum2,sum1,sum3);
}
int main(){
    char a[10005];
    fgets(a,10005,stdin);
    a[strlen(a)-1]='\0';
    dem(a);
    return 0;
}