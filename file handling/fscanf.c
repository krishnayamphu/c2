#include<stdio.h>
FILE *f;
void main(){
char name[20];
int age;

f=fopen("person.txt","r");
while(fscanf(f,"%s%d",&name,&age)!=EOF){
  printf("Name: %s",name);
  printf("\nAge : %d",age);
}
fclose(f);
}
