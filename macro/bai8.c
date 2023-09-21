//function macros
#include<stdio.h>

#define DAT_MIN ((a)<(b)) ? (a) : (b)

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("min between two number is : %d",DAT_MIN);
	return 0;
}
