#include<stdio.h>
void main(){
int A[2][2]={1,2,3,4};
int B[2][2]={5,6,7,8};
int SUM[2][2];
int i,j,k,l;

for(i=0;i<2; i++){
    for(j=0;j<2; j++){
        SUM[i][j]=A[i][j]+B[i][j];
    }
}
for(k=0;k<2;k++){
    for(l=0;l<2; l++){
        printf("%d ",SUM[k][l]);
    }
    printf("\n");
}
}
