#include<stdio.h>
struct Employee{
    char name[20];
    int age;
};
void main(){
struct Employee e={"Ram",20};
printf("Name: %s",e.name);
printf("\nAge: %d",e.age);
}
