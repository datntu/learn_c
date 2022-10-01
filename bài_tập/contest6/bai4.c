// gủi thư
#include<stdio.h>
#include<math.h>

int tmin(int a,int b){
    int min=0;
    if(a>b) min =b;
    else min =a;
    return min;
}
int tmax(int a,int b){
   int max=0;
   if(a>b) max=a;
   else max=b;
   return max;
}

void ham(int n,int a[]){
    for(int i=0;i<n;i++){
        if(i==0) printf("%d  %d\n",a[1]-a[0],a[n-1]-a[0]);
        else if(i==n-1){
            printf("%d %d\n",a[n-1]-a[n-2],a[0]-a[n-1]);
        }else{
            printf("%d %d\n",tmin(a[i]-a[i-1],a[i+1]-a[i]),tmax(a[i]-a[0],a[n-1]-a[i]));
        }
    }
}
int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    ham(n,a);

    return 0;
}