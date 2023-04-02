#include<stdio.h>
void main(){

char name[20];
start:
printf("Enter name:");
scanf("%s",&name);
printf("Name: %s\n\n",name);
goto start;

}
