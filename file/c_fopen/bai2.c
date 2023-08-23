#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *demo;
    int display;
    demo=fopen("demo_file.txt","r");
    while(1){
        display=fgetc(demo);
        if(feof(demo)){
            break;
        }
        printf("%c",display);
    }
    fclose(demo);
    return 0;
}