#include<stdio.h>
#include<string.h>
union Student{
    char name[20];
    int rollno;
};
void main(){
    union Student s;
    strcpy(s.name,"Ram");
    printf("Name: %s",s.name);

    s.rollno=10;
    printf("\nRollno: %d",s.rollno);
}
