//multi line macro
#include<stdio.h>

#define ALA 1, \
            2, \
            3
int main(){
    int a[]={ALA};
    for(int i=0;i<3;i++){
        printf("%d ",a[i]);
    }
    return 0;
}