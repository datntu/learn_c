#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct student{
	int id;
	char name[50];
	char ns[50];
};

static const struct student stupid[]={
	{1,"nguyen tien dat","ninh binh" },
	{2,"nguyen dinh tien","quang ninh"},
	{12,"nguyen Phu Trọng","Hà nội"}	
};
int main(){
	for(int i=0;i<sizeof(stupid)/sizeof(stupid[0]);i++){
		printf("%d\t%s\t%s\n",stupid[i].id,stupid[i].name,stupid[i].ns);
	}
	return 0;
}
