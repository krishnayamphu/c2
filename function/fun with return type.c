#include<stdio.h>
int getMaxAge();
float getInterestRate();
void main(){
int age=getMaxAge();
printf("%d ",getMaxAge());
printf("\nMaximum Human Age: %d",age);
printf("\nNMB Bank Interest Rate: %0.2f",getInterestRate());
}
int getMaxAge(){
    return 120;
}
float getInterestRate(){
    return 7.5;
}
