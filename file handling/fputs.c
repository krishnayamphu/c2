#include<stdio.h>
FILE *f;
void main(){
f=fopen("data.txt","w");
fputs("hello world",f);
printf("Data write successfully.");
fclose(f);


}
