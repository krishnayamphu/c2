#include<stdio.h>
void main(){
int n,i;
step1:
printf("Enter number:");
scanf("%d",&n);
for(i=1; i<=10; i++){
    printf("%d x %d = %d\n",n,i,n*i);
}
printf("\n\n");
goto step1;
}
