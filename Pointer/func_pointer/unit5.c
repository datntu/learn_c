#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void func(void){
	printf("hello dat\t a a a\n");
}


int main(){
	void (*funcc)(void)=func;
	funcc();
}
