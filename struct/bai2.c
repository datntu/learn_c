// Modify values
#include<stdio.h>
#include<string.h>

struct dat_struct{
    int a;
    char name[100];
    char myString[100];
};
typedef struct dat_struct dat_struct;

int main(){
    dat_struct v1;
    fgets(v1.name,sizeof(v1.name),stdin);
    v1.name[strlen(v1.name)-1]='\0';
    scanf("%d",&v1.a);
    strcpy(v1.myString,"HUNG EAT LOL\n");
    printf("%s %d %s",v1.name,v1.a,v1.myString);
    return 0;
}
