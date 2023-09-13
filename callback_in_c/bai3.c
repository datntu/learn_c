//Callback function in C with arguments
#include<stdio.h>

typedef void (*callback_)(int a);

void callback_fn(int a){
    printf("number find is %d",a);
}

void testloop(callback_ fd){
    for(int i=0;i<5;i++){
        if(i==4){
            fd(i);
        }
        printf("%d",i);
    }
}

int main(){
    callback_ fd_ptr =  &callback_fn;
    testloop(fd_ptr);
    return 0;
}