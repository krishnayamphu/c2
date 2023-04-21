#include<stdio.h>
FILE *f;
void main(){
char name[]="Ram";
int age=20;

f=fopen("person.txt","w");
fprintf(f,"%s\t%d",name,age);
printf("data write successfully");
fclose(f);


}
