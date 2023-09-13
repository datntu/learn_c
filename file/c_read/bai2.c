// fscanf(file_pointer, format, variables): Tương tự như hàm scanf khi đọc từ bàn phím.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	FILE *fd;
	fd=fopen("dat.txt","r");
	if(fd==NULL){
	return 0;
	}
	char a[100];
	while(fscanf(fd,"%s",a)!=-1){
		printf("%s ",a);
	}
	fclose(fd);
}
