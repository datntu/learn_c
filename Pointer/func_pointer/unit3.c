#include<stdio.h>

void add(int a,int b){
    printf("sum is %d\n",a+b);
}
void subtruct(int a,int b){
    printf("subtruct is %d\n", a-b);
}
void mutifly(int a,int b){
    printf("mutifly is %d",a*b);
}

int main(){
    void (*func[])(int,int)={add, subtruct, mutifly};
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<=2;i++){
        (func[i])(a,b);
    }
    return 0;
}