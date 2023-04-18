#include<stdio.h>
#include<string.h>
union Student{
    char name[20];
    int rollno;
};
void getStudentName(union Student);
void main(){
    char name[20];
    union Student s;
    printf("Enter name: ");
    scanf("%s",&name);
    strcpy(s.name,name);
    getStudentName(s);
}
void getStudentName(union Student s){
    printf("Name: %s",s.name);
}
