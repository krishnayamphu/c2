#include<stdio.h>
void main(){
int a=5;
int* ip;

ip=&a;

printf("Address of a: %u",&a);
printf("\nAddress value of ip: %u",ip);
printf("\n-------------\n");
printf("\nValue of a: %d",a);
printf("\nValue of ip: %d",*ip);

return 0;
}
