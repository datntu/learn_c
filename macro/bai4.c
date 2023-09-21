#include<stdio.h>

#define DEBUG 1
int main(){

#if DEBUG
        printf("this is the debug message\n");
#endif

	return 0;
}
