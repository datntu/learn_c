//các hàm thông dụng trong xâu kí tự
#include "stdio.h"
#include "string.h"
/*hàm strcmp
void Strcmp(char a[],char b[]){
    printf("%d",strcmp(a,b));
}*/
/*hàm strcat //nối xâu nguồn với xâu đích
void noiXau(char a[],char b[]){
    strcat(a ,b);
    printf("%s",a);
}*/

/*hàm strcpy ,copy nội dung xâu nguồn vào xâu đích,khi copy nỗi dung của xâu đích bị xóa hết
void coPy(char a[],char b[]){
    strcpy(a,b);
    printf("%s",a);
}*/

// hàm strrev ,hàm lật ngược xâu
void Strrev( char a[]){
    int l=0 , r=strlen(a)-1;
    while(r>=l){
        char tmp =a[l];
        a[l]=a[r];
        a[r]=tmp;
        ++l;
        --r;
    }
}

int main(){
    char a[100];
    char b[100];
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1] ='\0';
    fgets(b,sizeof(b),stdin);
   // Strcmp(a,b);
    //noiXau(a,b);
    //coPy(a,b);
    Strrev(a);
    printf("%s",a);
    return 0;
}