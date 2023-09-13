// su dung fputs di ghi chuoi vaof file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(){
	FILE * fd;
	fd =fopen("bai2.txt","w");
	if(fd ==NULL){
		return 0;
	}else{
		fputs("lancs mai dinh",fd);
	}
	fclose(fd);
}
