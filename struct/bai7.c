#include<stdio.h>
#include<string.h>
#include<stdint.h>
#include<stdlib.h>
typedef struct data{
	int8_t b1;
	int8_t b2;
	int8_t b3;
	int8_t b4;
	int8_t b5;
	int8_t b6;
} data;
void solve(char a[],data *v1){
	char *token=strtok(a,":");
	char b[100][50];
	int dx=0;
	while(token!=NULL){
		strcpy(b[dx], token);
		++dx;
		token=strtok(NULL,":");
	}
	v1->b1=atoi(b[0]);
	v1->b2=atoi(b[1]);
	v1->b3=atoi(b[2]);
	v1->b4=atoi(b[3]);
	v1->b5=atoi(b[4]);
	v1->b6=atoi(b[5]);
}

int main(int argc,char **argv){
	char a[100];
	data v1;
	strcpy(a,argv[1]);
	solve(a,&v1);
	printf("%d %d %d %d\t %d %d",v1.b1,v1.b2,v1.b3,v1.b4,v1.b5,v1.b6);

	return 0;
}
