#include<stdio.h>
// ghi 1 ki tự vào file thông qua con trỏ file
#include<string.h>
#include<stdlib.h>
int main(){
 	FILE *fd;
	fd=fopen("bai1.txt","w");
	char a[]={"tao ten la: la ten tao\n"};
	for(int i=0;i<strlen(a);i++){
		fputc(a[i],fd);
	}
	fclose(fd);
}
