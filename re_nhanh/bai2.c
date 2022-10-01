//giai pt bac 2
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float denta=(b*b)-4*a*c;
    if(denta<0) printf("pt vo nghiem");
    else if(denta==0) printf("pt co nghiem kep x= %f",-b/2*a);
        else printf("pt co hai nguyen x1=%f\n,x2=%f",(-b-sqrt(denta))/2*a,(-b+sqrt(denta))/2*a);

    return 0;
}