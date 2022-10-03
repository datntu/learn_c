//merge sort
#include "stdio.h"

void merge(int a[],int l,int r,int m){
    int n1=m-l+1, n2=r-m;
    int x[n1],y[n2];
    for(int j=l;j<=m;j++){
        x[j-l]=a[j];
    }
    for(int j=m+1;j<=r;j++){
        y[j-m-1]=a[j];
    }
    int i=0,j=0;
    int cnt=1;
    while(i<n1 && j<n2){
        if(a[i]<=a[j]){
            a[cnt++]=a[i++];
        }else{
            a[cnt++]=a[j++];
        }
    }
    while(i<n1) a[cnt++]=a[i++];
    while(j<n2) a[cnt++]=a[j++];
}
void mergesort(int a[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int chan[10001],le[10001];
int main(){
    int n;
    scanf("%d",&n);
    int c=0,l=0;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x%2==0){
            chan[c]=x;
            ++c;
        }else{
            le[l]=x;
            ++l;
        }
    }
    mergesort(chan,0,c-1);
    mergesort(le,0,l-1);
    for(int i=l-1;i>=0;i--){
        printf("%d ",le[i]);
    }
    for(int i=0;i<c;i++){
        printf("%d ",chan[i]);
    }
}