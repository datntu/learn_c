//ky tu xuat hien o ca hai xau
#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

int main(){
    char a1[100001],a2[1000001];
    fgets(a1,sizeof(a1),stdin); a1[strlen(a1)-1]='\0';
    fgets(a2,sizeof(a2),stdin); a2[strlen(a2)-1]='\0';
    int giao[256]={0},hop[256]={0};
    for(int i=0;i<strlen(a1);i++){
        giao[a1[i]]=1;
        hop[a1[i]]=1;
    }
    for(int i=0;i<strlen(a2);i++){
        hop[a2[i]]=1;
        if(giao[a2[i]]==1){
            giao[a2[i]]=2;
        }
    }
    for(int i=0;i<256;i++){
        if(giao[i]==2){
            printf("%c",i);
        }
    }
    printf("\n");
    for(int i=0;i<256;i++){
        if(hop[i]){
            printf("%c",i);
        }
    }
    return 0;
}