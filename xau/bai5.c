//  cho mot so nguyen dung khoong qua 10000 chu so. tinh tong
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    char a[10000];
    scanf("%s",a);
    int sum = 0;
    for(int i=0;i<strlen(a);i++){
        sum+= a[i]-'0';
    }
    printf("%d",sum);
    return 0;
}