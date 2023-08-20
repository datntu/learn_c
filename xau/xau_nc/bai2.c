//in hoa in thuong
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void solve(char a[]){
    for(int i=0;i<strlen(a);i++){
        a[i]=toupper(a[i]);
    }
    printf("%s\n",a);
    for(int i=0;i<strlen(a);i++){
        a[i]=tolower(a[i]);
    }
    printf("%s",a);
}


int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1] = '\0';
    solve(a);
    return 0;
}