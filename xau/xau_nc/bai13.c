//tao email vaf mk
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void solve(char a[]){
    for(int i=0;i<strlen(a);i++){
        a[i]=tolower(a[i]);
    }
    char b[100][50];
    int dx=0;
    char *token=strtok(a," ");
    while (token!=NULL)
    {
        strcpy(b[dx],token);
        dx++;
        token=strtok(NULL," ");
    }
    printf("%s",b[2]);
    printf("%c",b[0][0]);
    printf("%c@xyz.edu.vn",b[1][0]);
}
void solve1(char b[]){
    char *token=strtok(b,"/");
    while (token!=NULL)
    {
        printf("%d",atoi(token));
        token=strtok(NULL,"/");
    }
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char a[100];
        char b[100];
        fgets(a,sizeof(a),stdin); a[strlen(a)-1]='\0';
        fgets(b,sizeof(b),stdin); b[strlen(b)-1]='\0';
        solve(a);
        printf("\n");
        solve1(b);
    }
    return 0;
}