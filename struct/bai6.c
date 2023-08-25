//example structure nesting
#include<stdio.h>

struct child{
    int x;
    char y;
};

struct parent{
    int a;
    struct child b;
};

int main(){
    struct parent var1={1,115,'c'};
    printf("%d %d %c",var1.a,var1.b.x,var1.b.y);
    return 0;
}


