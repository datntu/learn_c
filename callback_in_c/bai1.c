#include<stdio.h>

void callback_fc(void){
    printf("hello workd\n");
}

void test(void (*fn)(void)){
    for(int i=0;i<5;i++){

        if(i==4){
            (*fn)();
        }
        printf("%d\n",i);
    }
}


int main(){
    void (*fn_prt)(void) =&callback_fc;
    test(fn_prt);
    return 0;
}