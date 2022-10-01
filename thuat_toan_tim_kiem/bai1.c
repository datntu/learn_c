#include<stdio.h>

int bs(int n,int a[],int x){
    int left=0;;
    int right =n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(a[mid]==x) return 1;
        else if (a[mid]<x) left=mid +1;
             else right=mid-1;
    }
    return 0;
}
int main(){
    int n,a[100];
    printf("nhap so pt n: "); scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int x;
    printf("nhap so can tim trong mang:"); scanf("%d",&x);
    if(bs(n,a,x)==1) printf("have a number same\n");
    else printf("don't find your number\n");
    return 0;
}