//tìm ước chung lóp nhất ước chung nhỏ nhất bằng đệ quy
#include<stdio.h>

// hàm ươcs chung lớp nhất : gcd
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
//bôi chung nhỏ nhất a*b/gcd
int main(){
    int a,b;
    printf("nhap hai so a,b:"); scanf("%d%d",&a,&b);
    printf("uoc truong lon nhat của hai so %d và %d là %d",a,b,gcd(a,b));
    return 0;
}