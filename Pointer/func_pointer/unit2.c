#include<stdio.h>

void func(int a){
    printf("value of a is %d",a);
}

int main(){
    
    void (*func_ptr)(int) =func;
    func_ptr(10);
    return 0;
}