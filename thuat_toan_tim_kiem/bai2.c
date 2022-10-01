//tim vị trí đầu tiên số x xuât hien trong mang
#include<stdio.h>

int find(int n,int a[],int x){
    int res=-1;
    int l=0 ,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            res =m;
            r=m-1;
        }else{
            if(a[m]>x) l=m+1;
            else r=m-1;
        }
    }
    return res;
}
int main(){
    int n,a[100];
    printf("nhap so pt n:"); scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int x;
    printf("nhap so can tim:");scanf("%d",&x);
    int sos=find(n,a,x);
    printf("vi tri co %d xuat hien dau tien la %d ",x,sos);

}