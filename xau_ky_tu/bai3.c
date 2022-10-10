/* các hàm kiểm tra kí tự
    hàm isdigit(char c) kiểm tra chữ số
    hàm islower(char c) kiểm tra chữ in thường
    hàm isupper(char c) kiểm tra chữ in hoa
    hàm isalpha( char c) kiểm tra chữ cái
    hàm tolowwer(char c) chuyển thành chữ in thương
    hàm toupper(char) chuyển thành chữ in hoa
*/
#include "stdio.h"
#include "string.h"
#include "ctype.h" //thư viện ktra cac ki tu


//hàm kiểm tra chữ số
void ktraSo(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(isdigit(a[i])){
            printf("%c",a[i]);
        }
    } printf("\n");
}
//ham kiểm tra chữ thường
void chuThuong(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(islower(a[i])){
            printf("%c",a[i]);
        }
    } printf("\n");
}
//hàm kiểm tra chu in hoa
void chuHoa(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(isupper(a[i])){
            printf("%c",a[i]);
        }
    }printf("\n");
}
//kiểm tra chữ cái
void chuCai(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(isalpha(a[i])){
            printf("%c",a[i]);
        }
    }
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    ktraSo(a);
    chuThuong(a);
    chuHoa(a);
    chuCai(a);
}