//tập từ chung của 2 xâu
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void lower(char a[]){
    for(int i=0;i<strlen(a);i++){
        a[i]=tolower(a[i]);
    }
}
void tach(char a[],int *n,char x[][50]){
    char *token=strtok(a," ");
    while(token!=NULL){
        strcpy(x[*n],token);
        (*n)++;
        token=strtok(NULL," ");
    }
}

int cmp(const void *a,const void *b){
    char *x =(char*)a;
    char *y =(char*)b;
    return strcmp(x,y);
}


int main(){
    char a[10005],b[10005];
    fgets(a,sizeof(a),stdin); lower(a);
    fgets(b,sizeof(b),stdin); lower(b);
    a[strlen(a)-1]='\0';
    b[strlen(b)-1] ='\0';
    char x[1000][50],y[1000][50];
    int n=0,m=0;
    tach(a,&n,x);
    tach(b,&m,y);
    qsort(x,n,sizeof(x[0]),cmp);
    for(int i=0;i<n;i++){
        while( i<n && strcmp(x[i],x[i+1])==0){
            i++;
        }
        int check=0; 
        for(int j=0;j<m;j++){
            if(strcmp(x[i],y[j])==0){
                check=1;
                break;
            }
        }
        if(check==0){
            printf("%s ",x[i]);
        }
    }
    return 0;
}