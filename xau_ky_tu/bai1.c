//xuat nhap xâu
#include "stdio.h"

int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    printf("%s",a);
    return 0;
}