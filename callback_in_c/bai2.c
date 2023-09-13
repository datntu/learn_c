//usr typedef for the func pointer
#include<stdio.h>
typedef void (*callback_)(void);

void callback_fn(void){
    printf("hello world\n");
}
void test_loop(callback_ fd){
    for(int i=0;i<6;i++){
        if(i==5){
            fd();
        }
        printf("%d\n",i);
    }
}
int main(){

    callback_ fn_ptr=callback_fn;
    test_loop(fn_ptr);
    return 0;
}