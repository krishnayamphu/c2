#include<stdio.h>
void main(){
    int a=5,b=6;
    int* const ptr=&a;

    //compile time error
    //ptr=&b;
    printf("Value of ptr: %d",*ptr);

}
