//sử dụng fprintf để ghi vào file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	FILE *fd;
	fd=fopen("bai3.ctxt","w");
	//ghi số
	for(int i=0;i<5;i++){
		fprintf(fd,"%d",i);
	}
	fprintf(fd," %s","tao ki nguc fanc");
	fclose(fd);
}
