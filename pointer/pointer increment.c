#include<stdio.h>
void main(){
int a=5;
int* ip;

ip=&a;

printf("\nAddress value of ip: %u",ip);
ip++;
printf("\nAddress value of ip after increment: %u",ip);

return 0;
}
