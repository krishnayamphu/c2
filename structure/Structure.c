#include<stdio.h>
#include<string.h>
struct Student{
    char name[20];
    int age;
};
void main(){
    struct Student s;
    struct Student s1;
    s.age=20;
    strcpy(s.name,"Ram");

    printf("Name: %s",s.name);
    printf("\nAge: %d",s.age);

    printf("\n\nName: ");
    scanf("%s",&s1.name);

    printf("Age: ");
    scanf("%d",&s1.age);

    printf("\n\nName: %s",s1.name);
    printf("\nAge: %d",s1.age);
}
