#include<stdio.h>
void merge(int a[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int x[n1],y[n2];
    for(int i=l;i<=m;i++){
        x[i-l]=a[i];
    }
    for(int i=m+1;i<=r;i++){
        y[i-m-1]=a[i];
    }
    int i=0,j=0,cnt=l;
    while(i<n1 && j<n2){
        if(x[i]<=y[j]){
            a[cnt++]=x[i++];
        }else{
            a[cnt++]=y[j++];
        }
    }
        while(i<n1) a[cnt++]=x[i++];
        while(j<n2) a[cnt++]=y[j++];
}
void mergeSort(int a[],int l,int r){

    if(l<r){
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(){
    int n;
    printf("nhap so pt cua a:");
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}