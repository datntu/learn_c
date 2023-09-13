//fgetc(file_pointer): Đọc 1 kí tự từ file, nếu tới cuối file và không đọc được nữa thì hàm này trả về EOF.
//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	FILE *fd;
	fd=fopen("dat.txt","r");
	if(fd==NULL){
		return 0;
	}
	char c=fgetc(fd);
	while(c!=EOF){
		printf("%c",c);
		c=fgetc(fd);
	}
	fclose(fd);
}
