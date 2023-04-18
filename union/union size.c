#include<stdio.h>
#include<string.h>
union Student{
    char name[20];
    int rollno;
};
void main(){
    union Student s;
    printf("Size: %d",sizeof(s));

}

