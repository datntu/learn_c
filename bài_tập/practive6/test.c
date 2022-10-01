//ôn lại thuật toán sắp xếp
#include<stdio.h>
void solve(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
/* thuat toan sap xep chon
void sel(int n,int a[]){
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(a[index]>a[j]){
                index=j;
            }
        }solve(&a[index],&a[i]);
    }
*/
// thuat toan noi bot
/*void bub(int n,int a[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]) solve(&a[j+1],&a[j]);
        }
    }
}*/
//thuat toan sep xep chen
/*void chen(int n,int a[]){
    for(int i=1;i<n;i++){
        int pos=i-1;
        int x=a[i];
        while(pos>=0 && a[pos]>x){
            a[pos+1]=a[pos];
            --pos;
        }
        a[pos+1]=x;
    }
}*/
int quick(int a[],int l,int r){
    int vilot=a[r];
    int i=l-1;
    for(int j=1;j<r;j++){
        if(a[j]<=vilot){
            ++i;    
            solve(&a[i],&a[j]);
        }
    }
    ++i;
    solve(&a[i],&a[r]);
    return i;
}
void quicksort(int a[],int l,int r ){
    if(l<r){
        int p=quick(a,l,r);
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
    }
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++) printf(" %d",a[i]);

    return 0;
}