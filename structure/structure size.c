#include<stdio.h>
struct Person{
    char name[20];
    int age;
};
void main(){
    struct Person p;
    printf("Structure Size: %d",sizeof(p));
}
