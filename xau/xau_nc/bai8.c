//tần xuất xuất hiện trong xâu
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct work{
    char data[100];
    int count;
};
typedef struct work work;
work a[1000];
int n=0;
int posWord(char c[]){
    for(int i=0;i<n;i++){
        if(strcmp(c,a[i].data)==0){
            return i;
        }
    }
    return -1;
}
void solve(char c[]){
    char *token=strtok(c," ");
    while(token!=NULL){
        int pos=posWord(token);
        if(pos==-1){
            strcpy(a[n].data,token);
            a[n].count++;
            n++;
        }else{
            a[pos].count++;
        }
    token=strtok(NULL," ");
    }
    for(int i=0;i<n;i++){
        printf("%s %d\n",a[i].data,a[i].count);
    }
}

int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    solve(a);



    return 0;
}