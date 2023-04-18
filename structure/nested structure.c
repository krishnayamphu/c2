#include<stdio.h>
#include<string.h>
struct Dob{
int day,month,year;
};
struct Student{
    char name[20];
    struct Dob dob;
};
void main(){
struct Student s;
strcpy(s.name,"Ram");
s.dob.day=01;
s.dob.month=10;
s.dob.year=1992;

printf("Name: %s",s.name);
printf("\nDate-of-Birth(d-m-y: %d-%d-%d)",s.dob.day,s.dob.month,s.dob.year);
}
