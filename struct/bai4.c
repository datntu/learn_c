//Enumeration
#include<stdio.h>
#include<string.h>

enum level{
    low,
    medium,
    high
};
int main(){
    enum level dat=medium;
    printf("%d",dat);
    return 0;
}