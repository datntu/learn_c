//syntax of fwrite
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct persion{
    int id;
    char fname[20];
    char lname[20];
};

int main(){
    FILE * outfile;
    outfile =fopen("persion.bin","wb");
    if(outfile==NULL){
        fprintf(stderr,"\nerror opened file\n");
        exit(1);
    }
    struct persion v1={1,"nguyen","dat"};
    int flag=1;
    flag=fwrite(&v1,sizeof(struct persion),1,outfile);
    if(flag){
        printf("writed\n"); 
    }else{
        printf("error\n");
    }
    fclose(outfile);
    return 0;
}