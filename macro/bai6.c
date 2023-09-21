#include<stdio.h>
#define DAT_PR(num, str) do{\
	printf("%d",num);\
	printf("is ");\
	printf("%s number",str);\
	printf("\n");\
	}while(0)

int main(){
	int num;
	scanf("%d",&num);
	if(num==5){
		DAT_PR(num,"old");
	}else{
		DAT_PR(num,"new");
	}
	return 0;
}
