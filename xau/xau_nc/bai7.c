//sắp xếp các từ trong xâu (theo thứ tự từ điển)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){
    char *x=(char*)a;
    char *y=(char*)b;
    return strcmp(x,y);
}

void solve(char a[]){
    //tach luu vao mang 2 chieu b
    char b[100][50];
    int dx=0;
    char *token=strtok(a," ");
    while(token!=NULL){
        int check=1;
        if(strcmp(b[dx],token)==0){
            check=0;
            break;
        }
        if(check){
            strcpy(b[dx],token);
            dx++;
        }
        token=strtok(NULL," ");
    }
    qsort(b,dx,sizeof(b[0]),cmp);
    for(int i=0;i<dx;i++){
        printf("%s ",b[i]);
    }
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    solve(a);
    return 0;
}