//find largest element in an Array
#include<stdio.h>

int findMax(int *a,int n){
    int Max=*a;
    for(int i=0;i<n;i++){
        if(*(a+i)>=Max){
            Max=*(a+i);
        }
    }
    return Max;
}

int main(){
    int a[]={20,10,20,4,100};
    int n=sizeof(a)/sizeof(a[0]);
    printf("max of array is %d\n",findMax(a,n));
    return 0;
}