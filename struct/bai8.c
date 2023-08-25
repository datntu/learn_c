#include<stdio.h>
#include<string.h>
#include<stdlib.h>

const char *binary(char hex){
	switch(hex){
		
		case '1':
			return "0001";
		case '2':
			return "0010";
		case '3':
			return "0011";
		case '4':
			return "0100";
		case '5':
			return "0101";
		case '6':
			return "0110";
		case '7':
			return "0111";
		case '8':
			return "1000";
		case '9':
			return "1001";
		case 'A': case 'a' : return "1010";
		case 'B': case 'b' : return "1011";
		case 'C': case 'c' : return "1100";
		case 'D': case 'd' : return "1101";
		case 'E': case 'e' : return "1110";
		case 'F': case 'f' : return "1111";
		default: return "";
	}
}
int main(){
	char hex[]="1B";
	int lenHex=strlen(hex);
	for(int i=0;i<lenHex;i++){
		const char *bin= binary(hex[i]);
			printf("%s ",bin);
	}
	return 0;
}



