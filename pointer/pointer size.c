#include<stdio.h>
void main(){
int *ip;
float *fp;
int* ptr=(3*sizeof(int));
printf("\nSize of ip: %d",sizeof(ip));
printf("\nSize of fp: %d",sizeof(fp));
printf("\nSize of ptr: %d",3*sizeof(int));
}
