//chuyển hoa-->thương. thường-->hoa
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void chuyenHoa(char a[]){
    for(int i=0;i<strlen(a);i++){
        a[i]=toupper(a[i]);
    }
    printf("%s",a);
}
void chuyenThuong(char a[]){
    for(int i=0;i<strlen(a);i++){
        a[i]=tolower(a[i]);
    }
    printf("%s",a);
}



int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    chuyenHoa(a);
    chuyenThuong(a);
    return 0;
}