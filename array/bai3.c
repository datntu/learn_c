//Multiplication of Rectangular Matrices using Pointers
//so hang matrix A= cot matrix B;
#include<stdio.h>

void multiply(int m1,int m2,int n1,int n2,int mat1[][m2],int mat2[][n2]){
    int res[m1][n2];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            res[i][j]=0;
            for(int x=0;x<m2;x++){
                *(*(res+i)+j)=*(*(mat1+i)+x)* *(*(mat2+x)+j);
            }
        }
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", *(*(res + i) + j));
        }
        printf("\n");
    }

}


int main(){
    int mat1[][2]={{1,1},{2,2}};
    int mat2[][2]={{1,1},{2,2}};
    int m1=2,m2=2,n1=2,n2=2;
    multiply(m1,m2,n1,n2,mat1,mat2);
    return 0;
}