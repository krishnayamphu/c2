#include<stdio.h>
FILE *f;
void main(){
char data[20];
f=fopen("data.txt","r");
fgets(data,20,f);
printf("%s",data);
fclose(f);


}
