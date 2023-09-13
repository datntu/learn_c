#include<stdio.h>
#define AREA(l,r) (l*r)

int main(){
    int l=2,r=4,area;
    area=AREA(l,r);
    printf("%d",area);
    return 0;
}