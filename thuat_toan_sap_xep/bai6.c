//săp sếp chèn
#include<stdio.h>
void insertionSort(int n,int a[]){
    for(int i=0;i<n;i++){
        int pos=i-1;
        int x=a[i];
        while(pos>=0 && a[pos]>x ){
            a[pos +1]=a[pos];
            --pos;
        }
        a[pos+1]= x;

    }
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    insertionSort(n,a);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}