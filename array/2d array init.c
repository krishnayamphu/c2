#include<stdio.h>
void main(){
int num[2][2]={{100,200},
               {300,400}};
int i,j;
for(i=0;i<2; i++){
    for(j=0;j<2; j++){
        printf("%d ",num[i][j]);
    }
    printf("\n");
}
}
