//tím số đứng giữa của một số nhập từ bàn phím
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    char a[100];
    scanf("%s",a);
    if(strlen(a)%2==0) printf("not fount\n");
    else printf("%c",a[strlen(a)/2]);
    return 0;
}