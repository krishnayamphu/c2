#include<stdio.h>
void main(){
int a=5, *p, **ptr;
p=&a;
ptr=&p;
printf("Value of a: %d",a);
printf("\nValue of p: %d",*p);
printf("\nValue of ptr: %d",**ptr);
}
