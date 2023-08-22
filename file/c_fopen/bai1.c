#include<stdio.h>
#include<string.h>

int main(){
    FILE *demo;
    demo=fopen("demo_file.txt","w+");

    fprintf(demo,"%s %s %s","hello","what","fuck");
    
    fclose(demo);
    return 0;
}