#include<stdio.h>
typedef struct{
    char name[20];
    int age;
}Employee;
void main(){
Employee e={"Ram",20};
printf("Name: %s",e.name);
printf("\nAge: %d",e.age);
}
