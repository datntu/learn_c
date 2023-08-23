#include<stdio.h>
#include<string.h>

struct myStruct{
    int myNum;
    char myLetter[100];
};

typedef struct myStruct myStruct;

int main(){
    myStruct v1;
    scanf("%d",&v1.myNum);
    getchar();
    fgets(v1.myLetter,sizeof(v1.myLetter),stdin);
    v1.myLetter[strlen(v1.myLetter)-1]='\0';

    printf("number : %d\n",v1.myNum);
    printf("myLetter : %s",v1.myLetter);
    return 0;
}
