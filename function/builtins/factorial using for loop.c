#include<stdio.h>
void main(){
    int i,f=1,n=4;
    for(i=n; i>=1; i--){
        printf("%d\n",i);
        f=f*i;
    }
    printf("\nOutput: %d",f);
}

