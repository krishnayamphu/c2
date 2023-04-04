#include<stdio.h>
void test(); //#1. function declaration
void main(){
 test(); //3. Function calling
}
void test(){ //2. #function definition
    printf("Testing function");
}
