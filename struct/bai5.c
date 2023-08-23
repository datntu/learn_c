#include<stdio.h>
#include<string.h>

struct str1{
    int i;
    char c;
    float f;
    char s[30];
};

 typedef struct str2{
    int ii;
    char cc;
    float ff;
} var;

int main(){
    struct str1 var1={1,'A',2.00,"nguyen tien dat"},var2;
     var var3={2,3.00,'A'};
    var2= var1;
    printf("struct 1:\n\t i=%d,c=%c,f=%f,s=%s\n",var1.i,var1.c,var1.f,var1.s);
    printf("struct 3:\n\t ii=%d,cc=%c,ff=%f\n",var3.ii,var3.cc,var3.ff);
    printf("struct 2:\n\t i=%d,c=%c,f=%f,s=%s\n",var2.i,var2.c,var2.f,var2.s);
    return 0;
}