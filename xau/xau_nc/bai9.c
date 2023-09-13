//tuần xuất xuất hiện nhiều nhất ,ít nhất
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct word{
    char data[100];
    int count;
};
typedef struct word word;
//khai bao mang a (kieu word)
word a[1000];
int n=0;
//cần 1 hàm để check 
int posword(char c[]){
    for(int i=0;i<n;i++){
        if(strcmp(c,a[i].data)==0){
            return i;
        }
    }
    return -1;
}

int cmp(const void *a,const void *b){
    word *x=(word*)a;
    word *y=(word*)b;
    return strcmp(x->data,y->data);
}
void solve(char c[]){
    char *token=strtok(c," ");
    while(token!=NULL){
        int pos=posword(token);
        if(pos==-1){
            strcpy(a[n].data,token);
            a[n].count++;
            n++;
        }else{
            a[pos].count++;
        }
    token=strtok(NULL," ");
    }
    qsort(a,n,sizeof(word),cmp);
    char res1[100],res2[100];
    int min=1e9,max=0;
    for(int i=0;i<n;i++){
        if(min>=a[i].count){
            min=a[i].count;
        strcpy(res1,a[i].data);
        }
    }
    for(int i=0;i<n;i++){
        if(max<=a[i].count){
            max=a[i].count;
            strcpy(res2,a[i].data);
        }
    }
    printf("%s %d\n",res2,max);
    printf("%s %d",res1,min);
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';
    solve(a);
    return 0;
}