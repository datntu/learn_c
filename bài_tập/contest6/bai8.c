//sắp xếp chẵn lẻ
#include "stdio.h"
int swap(int *n,int *m){
    int tmp=*n;
    *n=*m;
    *m=tmp;
}
void sx(int n,int a[]){
    for(int i=0;i<n;i++){
        int pos=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[pos]){
                pos=j;
            }
        }
        swap(&a[i],&a[pos]);
    }
}
int chan[10001],le[10001];
void xong(int n){
    int l=0,c=0;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x%2==0){
            chan[c]=x; ++c;
        }else{
            le[l]=x; ++l;
        }
    }
    sx(c,chan);
    sx(l,le);
    for(int i=l-1;i>=0;i--){
        printf("%d ",le[i]);
    }
    for(int i=0;i<c;i++){
        printf("%d ",chan[i]);
    }

}
int main(){
    int n; scanf("%d",&n);
    xong(n);
}