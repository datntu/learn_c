#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    switch(n){

        case 1:
            printf("chu nhat");
            break;
        case 2:
            printf( "thu hai");
            break;
        case 3:
            printf("thu ba");
            break;
        case 4:
            printf("thu tu");
            break;
        case 5:
            printf("thu nam");
            break;
        case 6:
            printf("thu sau");
            break;
        case 7:
            printf("thu bay");
            break;
        default:
            printf("du lieu khong hop le");
    }


    return 0;
}