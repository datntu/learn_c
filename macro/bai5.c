#include<stdio.h>

#define DAT(num,str){\
	printf("%d", num);\
	printf(" is");\
	printf("%s number",str);\
	printf("\n");\
}


int main(){
	int num;
	scanf("%d",&num);
	if(num+1==5){
		DAT(num,"được đấy chứ");
	}else{
		DAT(num,"Khó chịu thế nhờ");
	}
	return 0;
}
