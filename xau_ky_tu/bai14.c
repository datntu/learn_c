// lật ngược và in
#include "stdio.h"
#include "string.h"
#include "ctype.h"

void Strrev(char a[]){
    int l=0,r=strlen(a)-1;
    while(r>l){
        char tmp=a[l];
        a[l]=a[r];
        a[r]=tmp;
        l++;
        r--;
    }
}
void hoanThanh(char a[]){
    char n[100][100];
    int k=0;
    char *token=strtok(a," ");
    while(token !=NULL){
        strcpy(n[k],token);
        ++k;
        token=strtok(NULL," ");
    }
    for(int i=0;i<k;i++){
        if(i%2==0){
            printf("%s",n[i]);
        }else{
            Strrev(n[i]);
            printf("%s",n[i]);
        }
        if(i!=k-1){
            printf(" ");
        }
    }
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    hoanThanh(a);
}