//Merge an array of size
#include<stdio.h>
#define NA -1

void moveToEnd(int *a,int size){
    int j=size-1;
    for(int i=size-1;i>=0;i--){
        if(*(a+i)!=NA){
            *(a+j)=*(a+i);
            j--;
        }
    }
}
void merge(int *a,int *b,int n,int m){
    int i=n;
    int j=0;
    int k=0;
    while(k<(n+m)){
        if((j==n) || (i<(m+n) && *(a+i)<=*(b+j))){
            *(a+k)=*(a+i);
            k++;
            i++;
        }else{
            *(a+k)=*(b+j);
            k++;
            j++;
        }
    }
}
void print(int *a,int size){
    for(int i=0;i<size;i++){
        printf("%d ",*(a+i));
    }
    printf("\n");
}

int main(){
    int a[]={2,8,NA,NA,NA,13,NA,15,20};
    int b[]={5,7,9,25};
    int m=sizeof(b)/sizeof(b[0]);
    int n=sizeof(a)/sizeof(a[0])-m;
    moveToEnd(a,m+n);
    merge(a,b,n,m);
    print(a,m+n);
    return 0;
}