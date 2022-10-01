//thuat toan sap xep quick sort
#include<stdio.h>
//partion
//ham phan hoach lomoto
int partion(int a[],int l,int r){
    int i=l-1;
    int pivot=a[r];
    for(int j=l;j<r;j++){
        if(a[j]<=pivot){
            ++i;
            int temp=a[i]; a[i]=a[j]; a[j]=temp;
        }
    }
    ++i;
    int temp=a[i]; a[i]=a[r]; a[r]=temp;
    return i;
}
void quickSort(int a[],int l,int r){
    if(l<r){
        int m =partion(a,l,r);
        quickSort(a,l,m-1);
        quickSort(a,m+1,r);
    }
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}